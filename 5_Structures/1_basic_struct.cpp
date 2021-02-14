/***************************************************************
 * Description: This is to understand the structure  in c++.
 *             Structure is a collection of variables of different data types under a single name.
 *              It is similar to a "class" in that, both holds a collection of data of different data types
 * There are 3 different stages in struct
 *          1) Struct declaration:
 *              The "Struct" keyword defines a structure type followed by an identifier -(name of the structure).
 *                      Then inside the curly braces, you can declare one or more members (declare variables inside curly braces) of that structure
 *               ex: struct personn{    };
 *           2) Define structure:
 *                 When structure variable is defined, only then the required memory is allocated by the compile
 *                      ex: person variable;
 *
 *          3) Struct acessing:
 *              The members of structure variable is accessed using a dot (.) operator
 *                  example:  variable.name1 = assiognmnet;
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1;

    cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}
