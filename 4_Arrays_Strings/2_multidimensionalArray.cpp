/***************************************************************
 * Description: This is to understand the Multi-dimensional Arrays in c++.
 *              an array is a variable that can store multiple values of the same type in 2D, 3D and so on
 * the size and type of arrays cannot be changed after its declaration
 *
 * There is always certain steps we should use while creating array in c++
 *    step 1 : declaring an array
 *    step 2 : defining size of an array
 *    step 3 : initializing an array
 * It is nothing but matrix structure.
 * Pre-knowledge of matrix is necessary to understand
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/


 #include <iostream>
using namespace std;

/*2D Array declaring syntax;
        dataType arrayName[arraySize][arraysize];
        */

int main()
{
    //printing an array declared array value
    int defined[3][2] = {{1, 2},
                      {4, -6},
                      {9, 10}};    //declaring and defining 2D array

    // use of nested for loop
    // access rows of the array
    for (int i = 0; i < 3; ++i) {

        // access columns of the array
        for (int j = 0; j < 2; ++j) {
            cout << "defined[" << i << "][" << j << "] = " << defined[i][j] << endl;
        }
    }

    //taking inputs from user and prints it
     int numbers[2][3];

    cout << "Enter 6 numbers: " << endl;  //3 * 2 = 6

    // Storing user input in the array
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
            {
            cin >> numbers[i][j];
            }
    }

    cout << "The numbers are: " << endl;

    //  Printing array elements
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] << endl;
        }
    }


    //3D array
    int threeD[2][3][2] = {
                            {
                                {1, 2},
                                {3, 4},
                                {5, 6}
                            },
                            {
                                {7, 8},
                                {9, 10},
                                {11, 12}
                            }
                        };  //2*3*2 =12 elements in total

    // Displaying the values with proper index.
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << "threeD[" << i << "][" << j << "][" << k << "] = " << threeD[i][j][k] << endl;
            }
        }
    }


    return 0;
}
