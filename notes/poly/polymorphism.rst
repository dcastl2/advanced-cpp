Polymorphism
============

**Polymorphism** is presenting a single interface for multiple data types. For
something to be *polymorphic* ("many shaped") means that it can be use with
many types.

There are three types of polymorphism:

  * **ad-hoc polymorphism**, or function overloading; this is creating
  functions with the same name, but with different parameter lists

  * **subtyping**, or the is-a relationship that we have seen; subclasses
  can take on the characteristics of superclasses

  * **parametric polymorphism**, or generic programming; this is creating
  classes and functions that support any type


Ad-hoc Polymorphism
-------------------

Consider the following:

 .. code:: cpp

    int sum(int n) {
      return n*(n+1)/2;
    }

    int sum(int i, int n) {
      return n*(n+1)/2 - i*(i-1)/2;
    }

The first sum function calculates the sum from 1 to n, however the second
function calculates the sum from i to n.  Both have the same name, but
different parameter lists.  The question of which one is called depends
on how the parameter lists are supplied in the function call.

  .. code:: cpp

     int main() {
       std::cout << sum(10)    << std::endl;
       std::cout << sum(5, 10) << std::endl;
     }

In this ``main`` function, ``sum(10)`` calls the function which accepts only
one parameter. However ``sum(5, 10)`` calls the function which accepts the two
integer parameters. It is also possible to supply parameters of different
types, such as ``float``; however, one cannot have two functions of the same
name with the same parameter list, because there is no way to distinguish
between the two.


Subtyping
---------

Subtyping involves creating an is-a relationship between two classes. If B is a
A, then A is what is known as the **superclass**, and B the **subclass**. Example:

  .. code:: cpp

     class A {
       public: 
         int x;
     };

     class B: public A {
       public: 
         int y;
     };

A has the public field x and B uniquely has the public field y. B is-a A, which
means that B inherits all the public fields and functions of A. Therefore B has
a public field x which was inherited from A. 

Suppose we have the following class for polygons, which stores the number of
sides and the lengths of the sides:

  .. code:: cpp

     class Polygon {
       public:
         int  sides; 
         int *lengths;
         float getArea();
     };

The problem with this class definition is that the function for obtaining the
area of a polygon is not the same for all polygons. It is different for
rectangles and triangles, for example.  If we implement a function to find the
area of, say, a rectangle and try to subclass ``Polygon`` into ``Triangle``,
the ``getArea`` function would produce an area meant for rectangles.

What we want is to be able to specify a different ``getArea`` function when we
subclass ``Polygon``. Thus we make the ``getArea`` function a **virtual
function**. A virtual function is a function that can be overriden by its
subclasses. We use the keyword ``virtual`` to indicate a function is virtual.

  .. code:: cpp

     class Polygon {
       public:
         int  sides; 
         int *lengths;
         virtual float getArea() {return 0;}
     };

     class Rectangle : public Polygon {
       public:
         float getArea() {
           return lengths[0]*lengths[1];
         }
     };

The above is a demonstration of the use of virtual functions. Now that
``getArea`` is virtual, any subclass of ``Polygon`` can have its own
unique implementation of ``getArea``.  Another example:

  .. code:: cpp

     class Animal {
       public: 
         int cuteness; 
         virtual string noise() {return "?";}
     };

     class Cat : public Animal {
       public: 
         string noise() {
           return "Meow!";
         }
     };

     class Dog : public Animal {
       public: 
         string noise() {
           return "Bark!";
         }
     };

     class Fox : public Animal {
     };

Here is an ``Animal`` class; all animals have a ``cuteness`` rating.  Suppose
all animals also make noise, as indicated by the presence of a ``noise``
function.  But not all animals make the same noise. So we make the function
``virtual``, allowing it to be overridden by subclasses of ``Animal``. The
class ``Cat`` is a subclass of ``Animal``, and its ``noise`` function is
implemented to return a certain noise; also ``Dog`` is a subclass of
``Animal``, and it is implemented to return a certain other noise.  ``Fox``
is a subclass of ``Animal`` as well; but notice its ``noise`` function is not
implemented. It will therefore use the default ``noise`` function provided by
``Animal``, which will return a question mark string.

The utility of virtual functions is in having a default function that will
execute for subclasses where the virtual function is not explicitly overridden.
This allows for subclasses to have unique implementations of functions where
necessary, but use the defaults otherwise.
