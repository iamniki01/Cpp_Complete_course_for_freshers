/***************************************************************
 * Description: This is to understand the different types Flow controls  in c++.
 *              Here also we can learn forms of loop with code and with suitable example.
 * There are 3 forms of loops
 *          1)for statement
 *          2)while statement
 *          3)do..while statement
 *
 * Loops are used to repeat a block of code. For example if you want to print same message 20 times
 *   -rather using cout/printf statment 20 times we can run in loop.
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
    /*//syntax  : for(initialization ; condition ;incremet /decrement(update))
                  {
                  }                                                      */

    //this loop is to print given number of times in loop
    for(int i = 0; i<5;i++)
    {
        std::cout<<"Hello World printing "<<i<<" time"<<std::endl;
    }

    //ranged base for loop
    /*syntax: for(variable : collection)
        {
        } */
    int num_arry[] = {1,2,3,4,5,6,7,8,9,10};  //array declaration
    for(int n : num_arry)
    {
        std::cout<<n+1<<std::endl;
    }
    return 0;
}


