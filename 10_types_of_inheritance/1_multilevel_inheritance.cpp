/***************************************************************
 * Description: This is to understand the "C++ Multilevel Inheritance " in c++.
 *    --  Object-oriented Programmin[OOPs]: rather than creating separate variables and functions,
 *                      we can also wrap these related data and functions in a single place (by creating objects).
 *                      This programming paradigm is known as object-oriented programming.
 *           --In C++ programming, not only you can derive a class from the base class but you can also derive a class from the derived class.
 *                      This form of inheritance is known as multilevel inheritance.
 *             Syntax:
 *                  class A
 *                  {
 *                   ... .. ...
 *                  };
 *                   class B: public A
 *                   {
 *                   ... .. ...
 *                   };
 *                   class C: public B
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

class A
{
    public:
      void display()
      {
          cout<<"Base class content.";
      }
};

class B : public A
{

};

class C : public B
{

};

int main()
{
    C obj;
    obj.display();
    return 0;
}
