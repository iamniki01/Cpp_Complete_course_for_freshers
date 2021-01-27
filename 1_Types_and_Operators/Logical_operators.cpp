/***************************************************************
 * Description: This is to understand the different types OPERATORS in c++.
 *              Here also we can learn types of operators with code and with suitable example.
 * There are 6 types of operators
 *          4) Here we learn different types Logical operators
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
    bool Result ; //it gives true(1) or false(0) in binary


     //Each Cout, prints the different types of Logical Operators
     std::cout<<"=======Logical Operators======"<<endl;


     //logical AND'&&'
     Result = (number_1 <123 && number_2 < 22);
     std::cout<<"number_1 && number_2 is " << (Result)<<endl;

     //logical OR '||'
     Result = (number_1 <123 || number_2 < 22);
     std::cout<<"number_1 || number_2 is " << (Result)<<endl;

     //logical NOT: '!'
     Result = !(number_1 > number_2);
     std::cout<<"number_1 > number_2 is " << (Result)<<endl;


     Result = !(number_1 == number_2);
     std::cout<<"number_1 not of number_2 is " << (Result)<<endl;


     std::cout<<"\n\n";

     return 0;
}
