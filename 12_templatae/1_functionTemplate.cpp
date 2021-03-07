/***************************************************************
 * Description: This is to understand the "C++ Templates" in c++.
 *    --  Object-oriented Programming[OOPs]: rather than creating separate variables and functions,
 *                      we can also wrap these related data and functions in a single place (by creating objects).
 *                      This programming paradigm is known as object-oriented programming.
 *           Templates are powerful features of C++ which allows you to write generic programs.
 *          In simple terms, you can create a single function or a class to work with different data types using templates.
 *          Templates are often used in larger codebase for the purpose of code reusability and flexibility of the programs.
 *
 *            The concept of templates can be used in two different ways:

 *                  1) Function Templates
 *                  2) Class Templates
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/
 #include <iostream>
using namespace std;

// template function
template <class T>
T Large(T n1, T n2)
{
	return (n1 > n2) ? n1 : n2;
}

int main()
{
	int i1, i2;
	float f1, f2;
	char c1, c2;

	cout << "Enter two integers:\n";
	cin >> i1 >> i2;
	cout << Large(i1, i2) <<" is larger." << endl;

	cout << "\nEnter two floating-point numbers:\n";
	cin >> f1 >> f2;
	cout << Large(f1, f2) <<" is larger." << endl;

	cout << "\nEnter two characters:\n";
	cin >> c1 >> c2;
	cout << Large(c1, c2) << " has larger ASCII value.";

	return 0;
}
