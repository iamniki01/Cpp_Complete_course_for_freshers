#ifndef PARA_H
#define PARA_H
#include "Rectangle.h"
#include <iostream>

using namespace std;

class Para:public Rectangle
{
    public:

    Para(int w, int l, int h):r(w,l), height(h)
    {
        cout<<"Paramaterized constructor is called: "<< endl;
    }

private:
    Rectangle r;
    int height;

};

#endif // PARA_H
