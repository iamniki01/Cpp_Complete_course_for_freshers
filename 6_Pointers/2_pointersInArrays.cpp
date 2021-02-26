/***************************************************************
 * Description: This is to understand the Pointer  in c++.
 *              Pointers are variables that store the memory addresses of other variables.
 *               It can also store the address of cells of an array
 * There is way to declare:
 *          1) Pointer declaration:
 *              pointers are used to store addresses rather than values.
 *                  type* point; // preferred syntax
 *                  type arr[5];
 *                  point = &arr[0];
 *           Note: The * operator is used after the data type to declare pointers.
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include <iostream>
using namespace std;

int main()
 {
    float arr[5];

   // Insert data using pointer notation
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i)
    {

        // store input number in arr[i]
        cin >> *(arr + i) ;

    }

    // Display data using pointer notation
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i)
    {

        // display value of arr[i]
        cout << *(arr + i) << endl ;

    }

    return 0;
}
