#include <iostream>
#include<string.h>
using namespace std;
class student
{
    char name[20];
    int roll;

public:
    student(char n[],int r)
    {
        strcpy(name,n);
        roll=r;
    }
};
class test : public virtual student
{
public:
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;

public:
    test(int s1,int s2,int s3,int s4,int s5):student(n,r)
    {
        sub1=s1;
        sub2=s2;
        sub3=s3;
        sub4=s4;
        sub5=s5;
    }
    void details()
    {
        cout << "\n\nName : " << name << endl
             << "Roll number : " << roll << endl;
        cout << "Marks in 5 subjects : " << sub1 << ", " << sub2 << ", " << sub3 << ", " << sub4 << ", " << sub5 << endl;
    }
};
class sports
{
public:
    int msports;

public:
    sports(int ms)
    {
        msports=ms;
    }
};

class result : public test, public sports
{
    int total;
    float percent;

public:
    result():test(sub1,sub2,sub3,sub4,sub5),sports(msports)
    {

    }
    void display()
    {
        cout << "Marks in sports = " << msports << endl;
        total = sub1 + sub2 + sub3 + sub4 + sub5 + msports;
        percent = (total * 100) / 600;
        cout << "Total marks : " << total << endl
             << "Percent = " << percent << "%" << endl;
    }
};
int main()
{

    cout << "Enter name and roll: ";
        cin >> name >> roll;

        cout << "Enter marks of 5 subjects: ";
        cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

        cout << "Enter marks in sports : ";
        cin >> msports;
    result ob1;
    ob1.getdata();
    ob1.getmark();
    ob1.getspo();
    ob1.details();
    ob1.display();
}
