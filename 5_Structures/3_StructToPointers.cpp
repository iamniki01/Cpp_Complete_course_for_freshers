/***************************************************************
 * Description: This is to understand the structures to make use of pointer in c++.
 *             Structure is a collection of variables of different data types under a single name.
 *              A pointer variable can be created not only for native types like (int, float, double etc.) but they can also be created for user defined types like structure.
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

struct Distance
{
    int feet;
    float inch;
};

int main()
{
    Distance *ptr, d;

    ptr = &d;

    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    cout << "Enter inch: ";
    cin >> (*ptr).inch;

    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches"<<endl;
    cout << "Distance = " << ptr->feet << " feet " << ptr->inch << " inches"<<endl;  //another way of declaring pointer
    cout << "Distance = " << d.feet << " feet " << d.inch << " inches";  //give same result

    return 0;
}
