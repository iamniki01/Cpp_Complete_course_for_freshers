/***************************************************************
 * Description: This is to understand the different types Flow controls  in c++.
 *              Here also we can learn forms of loop with code and with suitable example.
 * There are 3 forms of loops
 *          1)for statement
 *          2)while statement
 *          3)do..while statement
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
    int number = 1;
    int sum = 10;

     /*//syntax  : while(condition)
                  {
                  }                                                      */
    //this loop is to print given number of times in loop
    while(number<=10)  //here it will run until
    {
        std::cout<<"value of number is "<<number <<std::endl;
        number ++;
    }
    /*//syntax  : do
                  {
                  body
                  }
                  while(condition)                                                    */

    //Here body execute first and later it check the condition but while loop check condition and execute body
    do
    {
        sum += number;
        std::cout<<"sum of number is "<<number<<std::endl;
        number ++;
    }while(number<=20);


    return 0;
}
