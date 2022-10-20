#include <iostream>
using namespace std;

class shape
{
public:
    void area();
};

class circle : public shape
{
public:
    float r;
    void get_value()
    {
        cout<<"Enter radius: ";
        cin>>r;
    }
    void area()
    {
        cout<<"The area of the circle is= "<<3.14*r*r<<endl;
    }
};

class triangle : public shape
{
public:
    float b,h;
    void get_value()
    {
        cout<<"Enter base and height: ";
        cin>>b>>h;
    }
    void area()
    {
        cout<<"The area of the triangle is= "<<0.5*b*h<<endl;
    }
};

class rectangle : public shape
{
public:
    float l,b;
    void get_value()
    {
        cout<<"Enter length and breadth: ";
        cin>>l>>b;
    }
    void area()
    {
        cout<<"The area of the rectangle is= "<<l*b<<endl;
    }
};

int main()
{
    circle ob1;
    triangle ob2;
    rectangle ob3;

    ob1.get_value();
    ob1.area();

    ob2.get_value();
    ob2.area();

    ob3.get_value();
    ob3.area();
}