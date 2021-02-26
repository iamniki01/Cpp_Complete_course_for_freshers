/***************************************************************
 * Description: This is to understand the Pointer  in c++.
 *              Pointers are variables that store the memory addresses of other variables.
 *              If we have a variable var in our program, &var will give us its address in the memory
 * There is way to declare:
 *          1) Pointer declaration:
 *              pointers are used to store addresses rather than values.
 *                  type* pointVar; // preferred syntax
 *
 *           Note: The * operator is used after the data type to declare pointers.
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include <iostream>
using namespace std;

int main()
{
    int var = 5;

    // declare pointer variable
    int* pointVar;

    // store address of var
    pointVar = &var;

    // print value of var
    cout << "var = " << var << endl;

    // print address of var
    cout << "Address of var (&var) = " << &var << endl
         << endl;

    // print pointer pointVar
    cout << "pointVar = " << pointVar << endl;

    // print the content of the address pointVar points to
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;

    return 0;
}
