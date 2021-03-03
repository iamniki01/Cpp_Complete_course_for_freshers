/***************************************************************
 * Description: This is to understand the "constructor" in c++.
 *      Object-oriented Programmin[OOPs]: rather than creating separate variables and functions,
 *                      we can also wrap these related data and functions in a single place (by creating objects).
 *                      This programming paradigm is known as object-oriented programming.
 *             A constructor is a special type of member function that is called automatically when an object is created.
 *              a constructor has the same name as that of the class and it does not have a return type.
 *
 *          1) C++ Default Constructor:
 *              A constructor with no parameters is known as a default constructor

 *          2) C++ Parameterized Constructor:
 *                In C++, a constructor with parameters is known as a parameterized constructor.
 *                   This is the preferred method to initialize member data
 *
 *          3) C++ Copy Constructor:
 *                  The copy constructor in C++ is used to copy data of one object to another.
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/


#include <iostream>
using namespace std;

class  defaultConstructor {

  private:
       string name;

   public:
    // create a constructor
    defaultConstructor() {

        // initialize private variables
        name = "Nikhil";

        cout << "Printing my name" << endl;
        cout << "Name = " << name << endl;
    }
};

class parametrizedConstructor {
   private:
    double length;
    double height;

   public:
    // create parameterized constructor
    parametrizedConstructor(double len, double hgt) {
        // initialize private variables
        length = len;
        height = hgt;
    }

    double calculateArea() {
        return length * height;
    }
};

class copyConstructor{
   private:
    double length;
    double height;

   public:

    // parameterized constructor
    copyConstructor(double len, double hgt) {
        // initialize private variables
        length = len;
        height = hgt;
    }

    // copy constructor with a Wall object as parameter
    copyConstructor(copyConstructor &obj) {
        // initialize private variables
        length = obj.length;
        height = obj.height;
    }
    double calculateArea() {
        return length * height;
    }
};

int main() {

    cout<<"default Constructor"<<endl;
    defaultConstructor defaultConstructor1;

    cout<<"Paramaterized constructor:"<<endl;
    parametrizedConstructor parametrizedConstructor1(10.5, 8.6);
    parametrizedConstructor parametrizedConstructor2(8.5, 6.3);

    cout << "Area of Wall 1: " << parametrizedConstructor1.calculateArea() << endl;
    cout << "Area of Wall 2: " << parametrizedConstructor2.calculateArea() << endl;




    // create an object of Wall class
    copyConstructor copyConstructor1(10.5, 8.6);

    // print area of wall1
    cout<<"Copy Construcor" <<endl;
    cout << "Area of Wall 1: " << copyConstructor1.calculateArea() << endl;

    // copy contents of wall1 to another object wall2
    copyConstructor copyConstructor2 = copyConstructor1;

    // print area of wall2
    cout << "Area of Wall 2: " << copyConstructor2.calculateArea() << endl;

    return 0;
}

