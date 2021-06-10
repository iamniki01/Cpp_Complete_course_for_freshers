#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Para.h"

using namespace std;


int main()
{
    cout << "Normal Object call" << endl;
    Rectangle R;
    R.setWidth(10);
    R.setLength(20);
    cout << "Rectangle Area:\t" <<R.getArea()<< endl;
    cout<<"-------------------------------"<<endl;
    cout<<" Object calling with deault Constructor:"<<endl;
    Rectangle r1;
    cout << "Rectangle Area:\t" <<r1.getArea()<< endl;
    cout<<"-------------------------------"<<endl;
    cout<<" Object calling with Paramaterized Constructor:"<<endl;
    Rectangle r2(10,20);
    cout << "Rectangle Area:\t" <<r2.getArea()<< endl;
    cout<<"-------------------------------"<<endl;
    cout<<" Object calling with para:"<<endl;
    Para p (10,20,10);
    cout << "Rectangle Volume:\t" <<p.getArea()<< endl;
    cout<<"-------------------------------"<<endl;
    Square s (10);
    cout << "Rectangle Volume:\t" <<s.getArea()<< endl;
    cout<<"-------------------------------"<<endl;


    return 0;
}
