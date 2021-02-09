/***************************************************************
 * Description: This is to understand the different types OPERATORS in c++.
 *              Here also we can learn types of operators with code and with suitable example.
 * There are 6 types of operators
 *          4) Here we learn different types Bitwise operators
 *
 * To understand this code, you need pre-knowledge of logic gates and its truth table.
 * To learn follow this link:   https://en.wikipedia.org/wiki/Logic_gate
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

//Header
#include<iostream>
using namespace std;

int main()
{
    int number_1 = 12;
    int number_2 = 4;
    bool Result ; //it gives true(1) or false(0) in binary


     //Each Cout, prints the different types of Bitwise Operators
     std::cout<<"=======Bitwise Operators======\n"<<endl;
     std::cout<<"=======Bitwise AND======\n"<<endl;

     //Bitwise AND '&'
     /*explanation : 12 in binary is 1100
                      4 in binary is 0100
            ------------------------------------
        And of 12 and 4 in binary is 0100   i.e 4 in decimal
        ---------------------------------------------------
        *****************/
     std::cout<<"number_1 & number_2 is " << (number_1 & number_2 )<<endl<<endl;




     //Bitwise OR '|'
     std::cout<<"=======Bitwise Or======\n"<<endl;
     /*explanation : 12 in binary is 1100
                      4 in binary is 0100
            ------------------------------------
        OR of 12 and 4 in binary is  1100   i.e 12 in decimal
        ---------------------------------------------------
        *****************/
     std::cout<<"number_1 | number_2 is " << (number_1 | number_2 )<<endl<<endl;






      //Bitwise XOR '^'
     std::cout<<"=======Bitwise XOR======\n"<<endl;
     /*explanation : 12 in binary is 1100
                      4 in binary is 0100
            ------------------------------------
        XOR of 12 and 4 in binary is 1000   i.e 8 in decimal
        ---------------------------------------------------
        *****************/
     std::cout<<"number_1 ^ number_2 is " << (number_1 ^ number_2 )<<endl<<endl;






      //Bitwise Compliment '~'
     std::cout<<"=======Bitwise Compliment======\n"<<endl;
     /*explanation : 4 in binary is 0100  since compliment is unary operator so it changes to 1 to 0 and 0 to 1
                                                         The above will do for first compliment
            ------------------------------------
  1's compliment of 4 in binary is 1011   i.e 11 in decimal, But this is not final , we have to do 2's compliment .e add +1 to LSB
                                    +  1
        ---------------------------------------------------
  bit-compliment of 4 in binary is  1100 equivalent to -(given number + 1)
  Note: sometimes it always depends on the number of bits you use in bit wise operators
        *****************/
     std::cout<<" Bitwise Compliment of number_2 is " << (~ number_2 )<<endl<<endl;






      //Bitwise right shift '>>'
     std::cout<<"=======Right shift operator======\n"<<endl;
     /*explanation : 4 in binary is 0100  since right shift is unary operator so it shifts one bit to right and the last bit is discarded at LSB
            ------------------------------------
      right shift of 4 in binary is 0010   i.e 2 in decimal
        ---------------------------------------------------
  Note: sometimes it always depends on the number of bits you use in bit wise operators
        *****************/
     int i = 1; //specified number of bits to shift
     std::cout<<"Right shift of number_2 with specified 1 bit " << (number_2 >> i) <<endl<<endl;







     //Bitwise left shift '<<'
     std::cout<<"=======left shift operator======\n"<<endl;
     /*explanation : 4 in binary is 0100  since left shift is unary operator so it shifts one bit to left and the last bit is discarded at MSB
            ------------------------------------
      right shift of 4 in binary is 1000   i.e 8 in decimal,
        ---------------------------------------------------
  Note: sometimes it always depends on the number of bits you use in bit wise operators
        *****************/
     std::cout<<"Left shift of number_2 with specified 1 bit " << (number_2 << i) <<endl<<endl;





     //let us shift 0 to 3 number of bits in loop
     std::cout<<"=======let us shift both right and left 0 to 3 specified bits ======\n"<<endl;
     for (int i =0; i < 4; i++)
     {
         std::cout<<"Right shift of number_2 with specified   >> " << i <<" bit" << (number_2 >> i) <<endl;
         std::cout<<"Left shift of number_2 with specified  << " << i  <<" bit"<< (number_2 << i) <<endl<<endl;

     }

     std::cout<<"\n\n";

     return 0;
}
