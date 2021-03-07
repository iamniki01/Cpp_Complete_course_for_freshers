/***************************************************************
 * Description: This is to understand the "C++ Multilevel Inheritance " in c++.
 *    --  Object-oriented Programming[OOPs]: rather than creating separate variables and functions,
 *                      we can also wrap these related data and functions in a single place (by creating objects).
 *                      This programming paradigm is known as object-oriented programming.
 *           --In C++ programming, not only you can derive a class from the base class but you can also derive a class from the derived class.
 *                      This form of inheritance is known as multilevel inheritance.
 *             Syntax:
 *                  class A
 *                  {
 *                   ... .. ...
 *                  };
 *                   class first_derived_class: public base_class
 *                   {
 *                   ... .. ...
 *                   };
 *                   class second_derived_class: public base_class
 *                   {
 *                   ... ... ...
 *                   };
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include <iostream>
using namespace std;

class Mammal {
  public:
    Mammal()
    {
      cout << "Mammals can give direct birth." << endl;
    }
};

class WingedAnimal {
  public:
    WingedAnimal()
    {
      cout << "Winged animal can flap." << endl;
    }
};

class Bat: public Mammal, public WingedAnimal {

};

int main()
{
    Bat b1;
    return 0;
}
