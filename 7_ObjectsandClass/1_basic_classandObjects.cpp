/***************************************************************
 * Description: This is to understand the "class" in c++.
 *      Object-oriented Programming[OOPs]: rather than creating separate variables and functions,
 *                      we can also wrap these related data and functions in a single place (by creating objects).
 *                      This programming paradigm is known as object-oriented programming.
 *             A class is a blueprint for the object. To define an enumeration, keyword class is used
 *
 *          1) Create a Class:
 *              The "class" keyword defines a enumeration type followed by an identifier -(name of the class).
 *                      The body of the class is defined inside the curly brackets and terminated by a semicolon at the end. of that structure
 *               ex: class person{ some data, objects and functions   };
 *          2) C++ Objects:
 *                When a class is defined, only the specification for the object is defined;
 *                no memory or storage is allocated.
 *               To use the data and access functions defined in the class, we need to create objects.
 *               Syntax: className objectVariableName;
 *          3) C++ Access Data Members and Member Functions:
 *                  We can access the data members and member functions of a class by using a '.' (dot) operator.
 *                     Syntax: classname.functionname()
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/


#include <iostream>
using namespace std;

class Room {

   private:
    double length;
    double breadth;
    double height;

   public:

    // function to initialize private variables
    void getData(double len, double brth, double hgt) {
        length = len;
        breadth = brth;
        height = hgt;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1;

    // pass the values of private variables as arguments
    room1.getData(42.5, 30.8, 19.2);

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}
