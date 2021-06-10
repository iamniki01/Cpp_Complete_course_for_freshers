#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
    this ->length = 5;
    this -> width = 5;
}

Rectangle::Rectangle(int w, int l):width(w), length(l)
{
    clog <<"Paramaterized constructor is called"<<endl;
}

void Rectangle::setWidth(int width)
{
    this->width = width;
}

void Rectangle::setLength(int length)
{
    this->length = length;
}
