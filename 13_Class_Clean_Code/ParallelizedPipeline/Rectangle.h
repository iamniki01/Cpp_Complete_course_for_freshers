#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    private:
        int width;
        int length;
    public:
        Rectangle();  //Default constrcuctor
        Rectangle(int w, int l); //Paramaterized constructor;

        void setWidth(int width);

        void setLength(int length);

        int getArea()
        {
            return width * length;
        }
};

#endif // RECTANGLE_H
