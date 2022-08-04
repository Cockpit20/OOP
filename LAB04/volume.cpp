#include<iostream>
#include<math.h>
using namespace std;

float volume(float radius)
{
    return ((float)(4)/(float)(3))*(float)(22)/(float)(7)*radius*radius*radius;
}

float volume(float radius,float height)
{
    return ((float)(22)/(float)(7))*radius*radius*height;
}

float volume(float l,float b,float h)
{
    return l*b*h;
}

int main()
{
    float radius;
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<volume(radius)<<endl;

    float height;
    cout<<"Enter radius and height: ";
    cin>>radius>>height;
    cout<<volume(radius,height)<<endl;

    float length, breadth;
    cout<<"Enter length,breadth and height: ";
    cin>>length>>breadth>>height;
    cout<<volume(length,breadth,height);
}