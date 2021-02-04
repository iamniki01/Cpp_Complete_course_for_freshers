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
    //lets creator calculator
    char operatr;
    float num1, num2;
    cout << "Enter an operator among these(+, -, *, /): ";
    cin >> operatr;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (operatr) {
        case '+':  //here it performs addition
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':   //here it performs subtraction
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':  //here it performs multiplication
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':  //here it performs division
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}
