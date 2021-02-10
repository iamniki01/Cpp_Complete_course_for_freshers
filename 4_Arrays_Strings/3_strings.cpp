/***************************************************************
 * Description: This is to understand the Strings in c++.
 *             String is a collection of characters.
 * There are two types of strings commonly used in C++ programming language:
 *            1) Strings that are objects of string class (The Standard C++ Library string class)
 *            2) C-strings (C-style Strings)
 *
 * 1) The standard library of string includes get, getline and many features
 * 2)   C-strings are arrays of type char terminated with null character, that is, \0 (ASCII value of null character is 0).
 *       The collection of characters is stored in the form of arrays
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/


 #include <iostream>
 #include <string>
using namespace std;

int main()
{
    /*c style string */
    char fn[50];  //declariung and defining size of string(works like array here)
    char ln[50];

    cout << "Enter your first name: ";
    cin >> fn;
    cout << "You entered: " << fn << endl;

    cout << "\nEnter your last name string: ";
    cin >> ln;
    cout << "You entered: "<<ln<<endl;
    cout<<"Your name is "<<fn<<" "<<ln<<endl;

    /*C ++ standard library */
    std::string str;
    cout << "Enter your school/college name: ";
    getline(std::cin, str);

    cout <<endl<< "Your school name is: " << str << endl;
    return 0;
}
