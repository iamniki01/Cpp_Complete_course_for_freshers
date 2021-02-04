/***************************************************************
 * Description: This is to understand the different types Flow controls  in c++.
 *              Here also we can learn forms of loop with code and with suitable example.
 * Here we learn break and continue statement
 *          1) break statement : it terminates the loop when it is encountered
 *          2)continue statement: it used to skip the current itreation
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

    //this loop is to print given number of times in loop and to terminate at condition
    for(int i = 0; i<5;i++)
    {
         if(i == 3)
        {
            std::cout<<std::endl<<"Going out from the loop"<<std::endl;
            break;
        }
        std::cout<<"Hello World printing "<<i<<" time"<<std::endl;

    }

    std::cout<<std::endl<<"Entering to the continue statement"<<std::endl;
     while(number<=10)  //here it will run until
    {
        std::cout<<"value of number is "<<number <<std::endl;
        number ++;
        if(number ==3 )
        {
           std::cout<<"number "<<number<<" is skipped" <<std::endl;
            continue;
        }

    }

    return 0;
}
