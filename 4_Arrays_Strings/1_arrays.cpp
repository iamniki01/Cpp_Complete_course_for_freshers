/***************************************************************
 * Description: This is to understand the Arrays in c++.
 *              an array is a variable that can store multiple values of the same type
 * the size and type of arrays cannot be changed after its declaration
 *
 * There is always certain steps we should use while creating array in c++
 *    step 1 : declaring an array
 *    step 2 : defining size of an array
 *    step 3 : initializing an array
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/


 #include <iostream>
using namespace std;

/*Array declaring syntax;
        dataType arrayName[arraySize];
        */

int main()
{
    //printing an array declared array value
    int numbers[5] = {1, 2, 3, 4, 5};

    cout << "The numbers are: ";

    //  Printing array elements
    // using range based for loop
    for (const int &n : numbers)
        {
            cout << n << "  ";
        }

    //taking inputs from user and prints it
    int numbers2[5];  //declaring and defining size

    cout << "Enter 5 numbers: " << endl;

    //  store input from user to array
    for (int i = 0; i < 5; ++i) {
        cin >> numbers2[i];
    }

    cout << "The numbers are: ";

    //  print array elements
    for (int n = 0; n < 5; ++n) {
        cout << numbers2[n] << "  ";
    }

    return 0;
}
