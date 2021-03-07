/***************************************************************
 * Description: This is to understand the "C++ friends " in c++.
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

class Distance {
    private:
        int meter;

        // friend function
        friend int addFive(Distance);

    public:
        Distance() : meter(0) {}

};

// friend function definition
int addFive(Distance d) {

    //accessing private members from the friend function
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;
}

