#include<iostream>
#include<string.h>
using namespace std;

class calls
{
private:
    char str[100];
public:
    calls()
    {
        strcpy(str,"Default constructor");
        cout<<str<<" created."<<endl;
    };
    calls(int para)
    {
        strcpy(str,"Paramerised contructor");
        cout<<str<<" created."<<endl;
    }
    calls(calls &copy)
    {
        strcpy(str,"Copy constructor");
        cout<<str<<" created."<<endl<<endl;
    }
    ~calls()
    {
        cout<<str<<" destroyed."<<endl;
    }
};


int main()
{
    int para;
    cout<<"Enter a parameter to be passed: ";
    cin>>para;
    calls c1;
    calls c2(para);
    calls c3(c2);
}