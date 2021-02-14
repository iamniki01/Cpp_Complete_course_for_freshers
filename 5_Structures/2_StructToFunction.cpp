/***************************************************************
 * Description: This is to understand the structure to make use of function in c++.
 *             Structure is a collection of variables of different data types under a single name.
 *              Structure variables can be passed to a function and returned in a similar way as normal arguments
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

struct Person {
    char name[50];
    int age;
    float salary;
};

Person getData(Person);
void displayData(Person);

int main()
{

    Person p;

    p = getData(p);
    displayData(p);

    return 0;
}

Person getData(Person p) {

    cout << "Enter Full name: ";
    cin.get(p.name, 50);

    cout << "Enter age: ";
    cin >> p.age;

    cout << "Enter salary: ";
    cin >> p.salary;

    return p;
}

void displayData(Person p)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}



/*Note::   The value of all members of a structure variable can be assigned to another structure
            using assignment operator = if both structure variables are of same type.
            We don't need to manually assign each members.*/
