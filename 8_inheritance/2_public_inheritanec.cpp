/***************************************************************
 * Description: This is to understand the "Inheritance " in c++.
 *    --  Object-oriented Programmin[OOPs]: rather than creating separate variables and functions,
 *                      we can also wrap these related data and functions in a single place (by creating objects).
 *                      This programming paradigm is known as object-oriented programming.
 *           -- Inheritance is one of the key features of Object-oriented programming in C++.
 *                   It allows us to create a new class (derived class) from an existing class (base class).
 *          -- The derived class inherits the features from the base class and can have additional features of its own
 *          -- Inheritance is an "is-a relationship". We use inheritance only if an is-a relationship is present between the two classes
 *          1) C++ access Members
 *      'public', 'protected', and 'private' inheritance have the following features:
 *          "public inheritance" makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
 *
 *          "protected inheritance"makes the public and protected members of the base class protected in the derived class.
 *
 *           "private inheritance" makes the public and protected members of the base class private in the derived class.
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

                                        /*Example of public_inheritance */

 #include <iostream>
using namespace std;

class Base {
   private:
    int pvt = 1;

   protected:
    int prot = 2;

   public:
    int pub = 3;

    // function to access private member
    int getPVT() {
        return pvt;
    }
};

class PublicDerived : public Base {
   public:
    // function to access protected member from Base
    int getProt() {
        return prot;
    }
};

int main() {
    PublicDerived object1;
    cout << "Private = " << object1.getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.pub << endl;
    return 0;
}
