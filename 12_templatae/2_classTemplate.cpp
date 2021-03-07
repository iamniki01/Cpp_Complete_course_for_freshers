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

template <class T>
class Calculator
{
private:
	T num1, num2;

public:
	Calculator(T n1, T n2)
	{
		num1 = n1;
		num2 = n2;
	}

	void displayResult()
	{
		cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
		cout << "Addition is: " << add() << endl;
		cout << "Subtraction is: " << subtract() << endl;
		cout << "Product is: " << multiply() << endl;
		cout << "Division is: " << divide() << endl;
	}

	T add() { return num1 + num2; }

	T subtract() { return num1 - num2; }

	T multiply() { return num1 * num2; }

	T divide() { return num1 / num2; }
};

int main()
{
	Calculator<int> intCalc(2, 1);
	Calculator<float> floatCalc(2.4, 1.2);

	cout << "Int results:" << endl;
	intCalc.displayResult();

	cout << endl << "Float results:" << endl;
	floatCalc.displayResult();

	return 0;
}
