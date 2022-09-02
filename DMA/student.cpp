#include<iostream>
#include<string.h>
using namespace std;

class student
{
private:
    char *name;
public:
    student(char p[])
    {
        int len=strlen(p);
        name=new char[len];
        strcpy(name,p);
    }

    void show()
    {
        cout<<"Name is "<<name<<endl;
    }
};

int main()
{
    char arr[20];
    cout<<"Enter name: ";
    cin>>arr;
    student s1(arr);
    s1.show();

    cout<<"Enter another name: ";
    cin>>arr;
    student s2(arr);
    s2.show();
}