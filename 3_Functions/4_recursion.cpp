/***************************************************************
 * Description: This is to understand the recursion  in c++.
 *              A function that calls itself is known as a recursive function
 *
 * The recursion continues until some condition is met
 *
 * Recursion is required in problems concerning data structures and advanced algorithms, such as Graph and Tree Traversaion
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

#include <iostream>
using namespace std;

int factorial(int);   //prototype to find factorial

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}
//recursive function
int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);  //calling function again inside the function
    } else {                           //here if..else used to avoid infinite loop, any approach is fine to avoid infinite loop
        return 1;
    }
}

/*Note: It takes a lot of stack space compared to an iterative program and also it takes more processor time.
   so, always better to use iterative program  */
