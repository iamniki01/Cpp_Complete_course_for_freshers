/***************************************************************
 * Description: This is to understand the Return by Reference  in c++.
 *              A function can also return a value by reference.
 *
 *
 * Let us learn about global scope of variable in cpp
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/


#include <iostream>
using namespace std;

// Global variable
int num;

// Function declaration
int& test();

int main()
{
    test() = 5;

    cout << num;

    return 0;
}

int& test()      //returns a reference of the variable num
{
    return num;   //returns the variable itself (address).

}

//Note: we can not run this using local variable
