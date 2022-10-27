#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    int roll;
    char name[50];

public:
    Student(char n[], int r)
    {
        strcpy(name, n);
        roll = r;
    }
    void putdata()
    {
        cout << "Name :" << name << endl;
        cout << "Roll No. :" << roll << endl;
    }
};
class Test : public Student
{
public:
    int m1, m2, m3, m4, m5, m6;
    float per;

public:
    Test(char n[], int ro, int p, int q, int r, int t, int s) : Student(n, ro)
    {
        m1 = p;
        m2 = q;
        m3 = r;
        m4 = t;
        m5 = s;
    }
    void display_data()
    {
        putdata();
        cout << "Marks of Subject 1   :  " << m1 << endl;
        cout << "Marks of Subject 2   :  " << m2 << endl;
        cout << "Marks of Subject 3   :  " << m3 << endl;
        cout << "Marks of Subject 4   :  " << m4 << endl;
        cout << "Marks of Subject 5   :  " << m5 << endl;
    }
};

class Sports
{
protected:
    int sp;

public:
    Sports(int k)
    {
        sp = k;
    }
    void getSports()
    {
        cout << "Marks Obtained In Sports: " << sp << endl;
    }
};

class result : public Test, public Sports
{
public:
    result(char n[], int r, int m1, int m2, int m3, int m4, int m5, int sp) : Test(n, r, m1, m2, m3, m4, m5), Sports(sp)
    {
    }
    void calculate()
    {
        float total = m1 + m2 + m3 + m4 + m5 + sp;
        float per = total / 6.0;
        cout << "Total :" << total << endl;
        cout << "Percentage :" << per << endl;
    }
};
int main()
{
    char name[50];
    int roll;
    cout << "Enter name and roll: ";
    cin >> name >> roll;

    float sub1, sub2, sub3, sub4, sub5;
    cout << "Enter marks of 5 subjects: ";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    float msports;
    cout << "Enter marks in sports : ";
    cin >> msports;

    result r(name, roll, sub1, sub2, sub3, sub4, sub5, msports);

    r.display_data();
    r.getSports();
    r.calculate();
}