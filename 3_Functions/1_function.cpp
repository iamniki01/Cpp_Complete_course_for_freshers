/***************************************************************
 * Description: This is to understand the functions and function expression  in c++.
 *              Here Function is a block of code that perform a specific task
 * There are 2 types of function
 *          1)Standard library function - these are predefined function
 *          2)User-defined function - created by us
 *
 * There is always certain steps we should use while creating function in c++
 *    step 1 : writing function prototype
 *    step 2 : declaring/ defining function
 *    step 3 : calling function
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

//Header
#include<iostream>
using namespace std;

//here we always declare the function prototype
void greet();  //without arguments and with void return type
void displayNum(int n1, float n2);  //with arguments and without return type
int add(int a, int b); //with argument and with int type return

/*Syntax:  returnType functionName (parameter1, parameter2,...)
            {
                    // function body
            }*/


int main()
{
    greet();
    int num1;
    int num2;
    std::cout<<"Enter any 2 Number: " ;
    std::cin>> num1 >> num2;

    std::cout<<"Magic!!Here is your number" <<std::endl;
    displayNum(num1, num2);
    int sum;
    sum = add(num1, num2);
    return 0;
}

//Function defination / declaration starts here here

void greet() {
    cout << "Hello there! Hope you are doing good and learning C++ \n";
}

void displayNum(int n1, float n2)
{
    std::cout << "The int number is : " << n1<<std::endl;
    std::cout << "The double number is : " << n2<<std::endl;
}

int add(int a, int b)
{
    int sum;
    sum = (a + b);
    std::cout<<"The sum of your two number is : "<<sum<<std::endl;
    return sum;
}

