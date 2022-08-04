//static data member and static member function
#include <iostream>
using namespace std;
 class student
 {
     int roll; //non static
     float avg; //non static
     static int k; //static data member
     public:
     void get() //non static member function
     {
         cout<<"enter roll and average ";
         cin>>roll>>avg;
         k = k+5;
     }
     void show() //non static member function
     {
         cout<<"roll = "<<roll<<" Average mark = "<<avg<<" k = "<<k<<endl;
     }
     static void display() //static member function
     {
         cout<<"k = "<<k<<endl;
     }
 };
 int student ::k=5; //default initial value is zero
 
int main()
{
    student s1,s2;
    s1.get();
    s2.get();
    s1.show();
    s2.show();
    student::display();//calling static member function using class name with scope resolution operator
    return 0;
}

