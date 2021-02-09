/***************************************************************
 * Description: This is to understand the functions and function expression  in c++.
 *              Here Function is a block of code that perform a specific task
 * There are 4 types of user defined function
 *          1) Function with no argument and no return value
 *          2) Function with no argument but return value
 *          3) Function with argument but no return value
 *          4) Function with argument and return value
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
// 1: No arguments passed and no return value
void isprime();  //to check weather the number is prime number or not

//2: No arguments passed but a return value
int multiply();

//3: Arguments passed but no return value
void displayNum(int n1, float n2);

//4: Arguments passed and a return value
int add(int a, int b);





int main()
{
    int num1 = 50, num2 = 65, product, sum;
    isprime();
    product = multiply();
    displayNum(num1, num2);
    sum = add(num1, num2);
    return 0 ;
}

// 1: No arguments passed and no return value

void isprime()
{

    int num, i, flag = 0;

    cout << "Enter a positive integer enter to check: ";
    cin >> num;

    for(i = 2; i <= num/2; ++i)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << num << " is not a prime number." <<std::endl;
    }
    else
    {
        cout << num << " is a prime number."<<std::endl;
    }
}

//2: No arguments passed but a return value
int multiply()
{
    int n1 = 50, n2 = 65, product;
    product = 50*65;
    std::cout<<"the product of 50 & 65 is : "<<product<<std::endl;
    return product;
}

//3: Arguments passed but no return value
void displayNum(int n1, float n2)
{
    std::cout << "The int number is : " << n1<<std::endl;
    std::cout << "The double number is : " << n2<<std::endl;
}

//4: Arguments passed and a return value
int add(int a, int b)
{
    int sum;
    sum = (a + b);
    std::cout<<"The sum of your two number is : "<<sum<<std::endl;
    return sum;
}

