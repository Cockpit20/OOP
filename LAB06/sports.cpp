#include <iostream>
#include <string.h>
using namespace std;

class student
{
public:
    char name[100];
    int roll;
    int age;
};

class test : virtual public student
{
public:
    int marks[5];

public:
    void get()
    {
        cout << "Enter name:";
        cin.getline(name, 100);

        cout << "Enter roll:";
        cin >> roll;

        cout << "Enter age:";
        cin >> age;

        cout << "Enter marks of five subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
};

class sports : virtual public student
{
public:
    int sports_marks;
    void get_marks_in_sports()
    {
        cout << "Enter marks in sports activity: ";
        cin >> sports_marks;
    }
};

class result : public test, public sports
{
public:
    void calculate()
    {
        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        total += sports_marks;
        float percent = ((float)(total) / (float)(600)) * (float)(100);
        cout << endl
             << "Total Marks= " << total << endl;
        cout << "Percentage= " << percent << "%" << endl;
    }
};

int main()
{
    result ob;
    ob.get();
    ob.get_marks_in_sports();

    cout << ob.name << endl;
    cout << ob.roll << endl;
    cout << ob.age << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ob.marks[i] << " ";
    }
    ob.calculate();
}