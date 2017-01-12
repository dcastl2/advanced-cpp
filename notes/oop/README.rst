Object-Oriented Programming and Classes
=======================================

**Object-oriented programming** is an approach to programming which creates an
*ontology*: an account of what is, the properties of things in the world, the
relationships among things, and the behavior of those things. For example, a
video game world contains such an account.

This approach lies in contrast to **procedural programming**, in which
everything to be done is laid out as a procedure without any necessary regard
to objects in the world.  So far, we have used a procedural approach to
programming.

At the heart of object-oriented programming is the concept of a **class**.  A
class embodies the properties and behavior of a thing.  The properties are data
associated with the class, which we call **fields**.  The behavior are
procedures associated with the class, which we call **methods** or **member
functions**.

For example, a Cat may be a class. A Cat may have a color, a name, weight, and
so forth. These are properties of the cat, and may be fields of a Cat class
(its color is a string, as is its name; the weight is a floating-point number).
Likewise a Cat may have behavior.  It could produce a meowing noise.  In a
video game, this may be a function such as ``void meow()`` which would play an
audio file of a cat's meow.  However, a class is purely conceptual. The class
represents Cat in general; but no specific cat.  

To create a specific instance of a class is called **instantiation**. The
instance is called an **object**. So for example, to take the Cat class and
create a representation of my cat Dexter would be instantiation. Using the
Cat class, I could create as many Cat objects as I wanted.

There are names for some of the more common methods of classes. Classes have
what are called **constructors**, which are used to initialize data to the
class. Some of the data is dynamically allocated; in that case, **destructors**
free the memory that was dynamically allocated.  An **accessor** is used to
retrieve data for an object, and a **mutator** is used to change it. Accessors
and mutators provide a safe and easily controllable intermediary between the
class and the data.

Classes are normally split into files like multi-source programs or libraries.
Typically, a header file for the class is created separately from a class
definition file. A header file for a class may look like this:

.. code:: cpp

  #ifndef CAT_H
  #define CAT_H

   class Cat {

     private:
      std::string name;
      float weight;

     public:
      std::string getName();
      void setName(std::string name);
      float getWeight();
      float gainPounds(float pounds);
      Cat(std::string, float);

   };

  #endif

This header file describes a Cat class, wherein the Cat has a name and weight.
Its name and weight can be retrieved; its name can be set; and judging from
the signature of ``float gainPounds(float pounds)``, it can also gain weight.

Here is what a class definition file may look like:

.. code:: cpp

   #include "Cat.h"

   std::string Cat::getName() {
     return name;
   }

   void Cat::setName(std::string name) {
     this->name = name;
   }

   float Cat::getWeight() {
     return weight;
   }

   void gainPounds(float pounds) {
     weight += pounds;
   }

   Cat::Cat(std::string name, float weight) {
     this->name   = name;
     this->weight = weight;
   }

Notice that the scope resolution operator (::) appears in the method
signatures.  This is because the methods are within the scope of the Cat class.
Cat is similar to a namespace in that it contains methods.

You may notice the ``this`` keyword.  ``this`` is a pointer to the current
object.  Notice that in ``void Cat::setName(std::string name)``, there are two
``name`` variables.  One is a parameter given to the method, simply referred to
as ``name``.  However, another is a field of the class, referred to as
``this->name``.  The ``this`` keyword is used to indicate that we are referring
to the name of the Cat object.  This line means we are taking in a given name
as a parameter and setting the Cat object's name to the given name.

The special method ``Cat::Cat(std::string name, float weight)`` is what is
known as a *constructor*.  It is used to set up the initial data for the class. 
It always has the same name as the class it is being defined for. 

To instantiate a cat, one may have a main code in which the ``Cat.h`` header
is included; and use the following syntax to create a new object:

.. code:: cpp

   #include "Cat.h"

   int main() {
     Cat dex("Dexter", 15.0);
     dex.gainPounds(2.5);
   }

In this example, a new ``Cat`` is created. The object name is ``dex``. Through
the constructor, the ``name`` field is set to ``Dexter``, and ``weight`` is
``15.0``. 

Immediately after creation of the Cat, the **dot operator** is used to access
the method ``gainPounds``.  The ``gainPounds`` method is called on ``dex``,
which increases the weight of ``dex`` by ``2.5``.  Note that we must have an
object to call methods of the class; we cannot simply make the call
``gainPounds(2.5)`` without calling it on an object, because there is no Cat
who will gain the weight.
