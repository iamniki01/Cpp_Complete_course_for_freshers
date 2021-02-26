/***************************************************************
 * Description: This is to understand the Pointer  in c++.
 *              Pointers are variables that store the memory addresses of other variables.
 *               1) This method used is called passing by value because the actual value is passed.
 *               2) another way of passing arguments to a function where the actual values of arguments are not passed.
 *                               Instead, the reference to values is passed.
 * There is way to declare:
 *          1) Pointer declaration:
 *              pointers are used to store addresses rather than values.
 *                  type* point; // preferred syntax
 *                  type arr[5];
 *                  point = &arr[0];
 *           Note: The * operator is used after the data type to declare pointers.
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include <iostream>
using namespace std;

#include <iostream>
using namespace std;

// function definition to swap values
void swapbyref(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void swapbyPoint(int* n1, int* n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{

    // initialize variables
    cout<<"Example for pass by reference"<<endl;
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call function to swap numbers
    swapbyref(a, b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout<<"Example for pass by point(value)"<<endl;


    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call function by passing variable addresses
    swapbyPoint(&a, &b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;



    return 0;
}
