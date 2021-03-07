/***************************************************************
 * Description: This is to understand the "Inheritance " in c++.
 *    --  Object-oriented Programming[OOPs]: rather than creating separate variables and functions,
 *                      we can also wrap these related data and functions in a single place (by creating objects).
 *                      This programming paradigm is known as object-oriented programming.
 *           -- Inheritance is one of the key features of Object-oriented programming in C++.
 *                   It allows us to create a new class (derived class) from an existing class (base class).
 *          -- The derived class inherits the features from the base class and can have additional features of its own
 *          -- Inheritance is an "is-a relationship". We use inheritance only if an is-a relationship is present between the two classes
 *          1) C++ protected Members
 *       The access modifier protected is especially relevant when it comes to C++ inheritance.
 *        Like "private members", protected members are inaccessible outside of the class.
 *          However, they can be accessed by derived classes and friend classes/functions.
 *          We need "protected" members if we want to hide the data of a class,
 *              but still want that data to be inherited by its derived classes.
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/
#include <iostream>
#include <string>
using namespace std;

// base class
class Animal {

   private:   //private members
    string color;

   protected:   //protected members
    string type;

   public:     //public members, accessible by all derived class
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }

    void setColor(string clr) {
        color = clr;
    }

    string getColor() {
        return color;
    }
};

// derived class
class Dog : public Animal {

   public:
    void setType(string tp) {
        type = tp;
    }

    void displayInfo(string c) {
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
    }

    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    // Calling member of the derived class
    dog1.bark();
    dog1.setType("mammal");

    // Using getColor() of dog1 as argument
    // getColor() returns string data
    dog1.displayInfo(dog1.getColor());

    return 0;
}
