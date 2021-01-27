/***************************************************************
 * Description: This is to understand the different types OPERATORS in c++.
 *              Here also we can learn types of operators with code and with suitable example.
 * There are 6 types of operators
 *          2) Here we learn different types Assignment operators
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
    int temp ; //decaring to use as assignment


     //Each Cout, prints the different types of Arithmetic Operators
     std::cout<<"=======Assignment Operators======"<<endl;
     //assignment operator: '='
     temp = number_1;
     std::cout<<"assignment operator: temp = " << (temp)<<endl;

     //ADDING the number with certain number '+='
     std::cout<<"adding 20 to temp " << (temp += 20)<<endl;

     //subtracing the number with certain number '-='
     std::cout<<"subtracting 20 from temp " << (temp -= 20)<<endl;

     //Multiplying the number with certain number '*='
     std::cout<<"multiplying 20 to temp " << (temp *= 20)<<endl;

     //dividing the number with certain number '+='
     std::cout<<"dividing temp from 20 " << (temp /= 20)<<endl;
     std::cout<<"\n\n";

     return 0;
}
