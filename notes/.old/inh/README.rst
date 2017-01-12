Inheritance
===========

There are two types of inheritance relationships:

  * **has-a**, or a relationship in which one class has an instance
  of another class as a field

  * **is-a**, or a relationship in which one class is a subtype of
  another class or field

Has-A Relationships
===================

A has-a relationship involves one class having one or more instances of another
class. For example:

  .. code:: cpp
     class Collar {
       public:
         bool spiked;
     };

     class Dog {
       public:
         int friendliness;
         Collar collar;
     };

     class Cat {
       public:
         int friendliness;
         Collar collar;
     };

In the above example, a ``Collar`` class is created which has a single public
field, ``bool spiked``, to indicate if the collar has spikes. A ``Dog`` class
has two public fields, an ``int friendliness`` to indicate the dog's friendly
nature, and ``Collar collar``. ``Collar`` is the type, whereas ``collar`` is
the name of the variable.

  .. code:: cpp

     int main() {
       Dog Caden;
       Caden.friendliness = 10;
       Collar scary_collar;
       scary_collar.spiked = true;
       Caden.collar = scary_collar;

       Cat DC;
       DC.friendliness = -10;
       Collar flea_collar;
       flea_collar.spiked = false;
       DC.collar = flea_collar;
     }

The above example creates a ``Dog`` called ``Caden``, sets its friendliness to
the max, then creates a ``Collar`` called ``scary_collar``, then sets its
``spiked`` value to true.  Then Caden's ``collar`` variable is set to the
``scary_collar``. Thus ``Caden`` now has a ``Collar`` which is spiked. 

Likewise created is a ``Cat`` called ``DC``, whose friendliness is set to -10;
then a ``Collar`` called ``flea_collar``, whose ``spiked`` value is set to
false.  Then DC's ``collar`` variable is set to the ``flea_collar``.  Thus
``DC`` now has a ``Collar`` which is not spiked. 


Is-A Relationships
==================

The is-a relationship involves one class being a type of another class. For
example, an owl is an animal; so is a fox:

  .. code:: cpp

     class Animal {
       public:
         int friendliness;
     };

     class Owl : public Animal {
       public:
         int wisdom;
     };
     
     class Fox : public Animal {
       public:
         int cunning;
     };

In this example, ``Animal`` has a ``friendliness`` rating.  ``Owl`` is an
``Animal``, so it inherits the ``friendliness`` field. But it also uniquely has
a ``wisdom`` field.  ``Fox`` is an ``Animal``, so it inherits the
``friendliness`` field. But it also uniquely has an ``cunning`` field. The
``Fox`` and ``Owl`` classes **inherit** the ``friendliness`` field. Following
is an example of use of this:

  .. code:: cpp

     int main() {
       Fox JoshuaBrock;
       JoshuaBrock.cunning      = 18;
       JoshuaBrock.friendliness = 10;

       Owl BenjaminBrim;
       BenjaminBrim.wisdom        = 18;
       BenjaminBrim.friendliness  = 10;
     }

In the above example, the instantiated ``Fox`` can have the field ``cunning``
(which is unique to the ``Fox`` class) accessed and set, but it can also have
``friendliness`` accessed and set (which is true of any ``Animal``). 
