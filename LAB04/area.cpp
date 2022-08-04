#include<iostream>
#include<math.h>
using namespace std;

float area(float radius)
{
    return ((float)(22)/(float)(7))*radius*radius;
}

int area(int length,int breadth)
{
    return length*breadth;
}

float area(int A,int B,int C)
{
    float s=((float)(A)+(float)(B)+(float)(C))/(float)(2);
    return pow(s*(s-(float)(A))*(s-(float)(B))*(s-(float)(C)),0.5);
}

int main()
{
    float radius;
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<area(radius)<<endl;

    int length;
    int breadth;
    cout<<"Enter length and breadth: ";
    cin>>length>>breadth;
    cout<<area(length,breadth)<<endl;

    int sideA, sideB, sideC;
    cout<<"Enter length of 3 sides of a triangle: ";
    cin>>sideA>>sideB>>sideC;
    cout<<area(sideA,sideB,sideC);
}