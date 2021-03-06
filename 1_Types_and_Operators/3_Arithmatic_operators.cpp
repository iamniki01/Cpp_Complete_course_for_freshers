/***************************************************************
 * Description: This is to understand the different types OPERATORS in c++.
 *              Here also we can learn types of operators with code and with suitable example.
 * There are 6 types of operators
 *          1) Here we learn with Arithmetic operators
 *
 *
 * Author :NikhiL Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

//Header
#include<iostream>
using namespace std;

int main()
{
    int number_1 = 122;
    double number_2 =44.66;

     //Each Cout, prints the different types of Arithmetic Operators
     std::cout<<"=======Arithmetic Operators======"<<endl;

     //Addition operation using '+'
     std::cout<<"number_1 + number_2= " << (number_1 + number_2)<<endl;

     //Subtraction operation using '-'
     std::cout<<"number_1 - number_2= " << (number_1 - number_2)<<endl;

     //Multiplication operation using '*'
     std::cout<<"number_1 * number_2= " << (number_1 * number_2)<<endl;

     //Division operation using '/'
     std::cout<<"number_1 / number_2= " << (number_1 / number_2)<<endl;

     //Modulo or reminder operation operation using '%'
     std::cout<<"number_1 % number_2= " << (number_1 % (int)number_2)<<endl;  //Here we are doing type conversion because we have different types


     //increment operation operation using '++'
     std::cout<<"number_1 ++ is similar to the number + 1:  " << (++number_1 )<<endl;

     std::cout<<"Incremented number_1"<<number_1<<endl;  //Here our assigned value is changed within the scope
     //decrement operation operation using '--'

     std::cout<<"number_1 -- is similar to the number - 1:  " << (--number_1 )<<endl;
      //Here we get back our real value by decremnting it

     std::cout<<"decremented number_1"<<number_1<<endl;
     //this mean new line always "better to use \n than endl".
     std::cout<<"\n";

     return 0;
}
