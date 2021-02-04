/***************************************************************
 * Description: This is to understand the different types Flow controls  in c++.
 *              Here also we can learn forms of condition if  with code and with suitable example.
 * There are 3 forms of if..else
 *          1)if statement
 *          2)if..else statement
 *          3)if...else if statement
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

//Header
#include<iostream>
using namespace std;

int main()
{
    int number;
    std::cout<<"Enter any Number: " ;
    std::cin>> number;

    // if conditiona
    if(number == 0)
    {
        std::cout<<"Number is equal to zero"<<std::endl<<std::endl;
    }
    //else if condition, where it enters only if statement is false
    else if(number>0)
    {
         std::cout<<"Number is greater than zero"<<std::endl<<std::endl;
    }
    //else condition, where it enters only 'if and else if' statement is false
    else
    {
         std::cout<<"Number is lesser than zero"<<std::endl<<std::endl;
    }

    std::cout<<"Ternary Operators"<<std::endl;
    //EXTRA :: ternary operators which will replace if..else
    //syntax:  condition ? expression1 : expression 2
    string output = (number > 0)? "Positive number": "Negative number";
    std::cout<<output<<std::endl;

    return 0;
}
