/***************************************************************
 * Description: This is to understand the different types Flow controls  in c++.
 *              Here also we can learn forms of loop with code and with suitable example.
 * Here we learn switch...case statement
 *          1) switch statement : it takes the expression and iterate over all case statements
 *          2)case statement: it contain code which will execute if expression is eqaul to case constant
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

    /*syntax:
            goto label;
            ... .. ...
            ... .. ...
            label:
                statement;
            ...
    */

    float num, average, sum = 0.0;
    int i, n;

    cout << "Maximum number of inputs: ";
    cin >> n;

    for(i = 1; i <= n; ++i)
    {
        cout << "Enter n" << i << ": ";
        cin >> num;

        if(num < 0.0)  //if we enter negative number then it will go to label
        {
           // Control of the program move to jump:
           std::cout<<"Entered negative number and now here is the average of numbers"<<std::endl;
            goto jump;
        }
        sum += num;
    }
 //this loop will run even if you not entered negative integer, it will execute after all iteration too.
jump:
    average = sum / (i - 1);
    cout << "\nAverage = " << average;
    return 0;
}
