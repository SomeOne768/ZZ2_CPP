#ifndef RECTANGLE_HPP_AZ
#define RECTANGLE_HPP_AZ

class Rectangle
{
protected:
    int x;
    int y;
    int h;
    int w;

public:
    Rectangle(int, int, int, int);
    virtual std::string toString();

};

#endif