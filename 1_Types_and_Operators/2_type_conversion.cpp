/***************************************************************
 * Description: This is to understand the different types conversion in datatypes.
 * Here also we can learn types of conversion with code and with suitable example.
 * There are two types of type conversion
 *          1) Implicit Conversion
 *          2) Explicit Conversion(type casting)
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
    int num_int = 12;
    double num_double;
     //implicit conversion --It is nothing but assigning
     num_double = num_int;  //implicit conversion happening here
     std::cout<<"=======implicit conversion======"<<endl;
     std::cout<<"num_int " << num_int<<endl;
     std::cout<<"number in double "<<num_double<<endl;
     std::cout<<"\n \n";

     //Explicit conversion  --where the user changes data from one type to another
     //syntax  -- (type)variable/expression
     int num_int_e;
     double num_double_e =12.665;

     num_int_e = (int)num_double_e;
     std::cout<<"=======explicit conversion======"<<endl;
     std::cout<<"num_int " << num_int_e<<endl;  //here we can observe the differece
     std::cout<<"number in double "<<num_double_e<<endl;

     return 0;

}


