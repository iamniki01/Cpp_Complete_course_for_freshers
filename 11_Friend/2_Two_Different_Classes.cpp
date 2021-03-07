/***************************************************************
 * Description: This is to understand the "C++ friend with Two Different Classes " in c++.
 *    --  Object-oriented Programming[OOPs]: rather than creating separate variables and functions,
 *                      we can also wrap these related data and functions in a single place (by creating objects).
 *                      This programming paradigm is known as object-oriented programming.
 *           --Data hiding is a fundamental concept of object-oriented programming.
 *                   It restricts the access of private members from outside of the class.
 *              Similarly, protected members can only be accessed by derived classes and are inaccessible
 *             There is a feature in C++ called friend functions that break this rule
 *                   and allow us to access member functions from outside the class
 *             Syntax:
 *          class className {
 *            ... .. ...
 *          friend returnType functionName(arguments);
 *              ... .. ...
 *            }
 *
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/
 #include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {

    public:
        // constructor to initialize numA to 12
        ClassA() : numA(12) {}

    private:
        int numA;

         // friend function declaration
         friend int add(ClassA, ClassB);
};

class ClassB {

    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}

    private:
        int numB;

        // friend function declaration
        friend int add(ClassA, ClassB);
};

// access members of both classes
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}
