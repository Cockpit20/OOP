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

class test : public student
{
public:
    int marks[5];

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

int main()
{
    test ob;
    ob.get();

    cout << ob.name << endl;
    cout << ob.roll << endl;
    cout << ob.age << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ob.marks[i] << " ";
    }
}