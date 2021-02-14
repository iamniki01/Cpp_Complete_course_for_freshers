/***************************************************************
 * Description: This is to understand the enumeration in c++.
 *             An enumeration is a user-defined data type that consists of integral constants. To define an enumeration, keyword enum is used
 *
 *          1) Enum declaration:
 *              The "enum" keyword defines a enumeration type followed by an identifier -(name of the structure).
 *                      Then inside the curly braces, you can declare one or more members (declare variables inside curly braces) of that structure
 *               ex: enum person{    };
 *          2) Define enumeraor:
 *                 When enumeraor variable is defined, only then the required memory is allocated by the compile
 *                      ex: person variable;
 *     An enum variable takes only one value out of many possible values
 *
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/


 #include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Wednesday;
    cout << "Day " << today+1;
    return 0;
}
