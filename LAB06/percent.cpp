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

class percent: public test
{
public:
    void calculate()
    {
        int total=0;
        for (int i = 0; i < 5; i++)
        {
            total+=marks[i];
        }
        float percent=((float)(total)/(float)(500))*(float)(100);
        cout<<endl<<"Total Marks= "<<total<<endl;
        cout<<"Percentage= "<<percent<<"%"<<endl;
    }
};

int main()
{
    percent ob;
    ob.get();

    cout << "Name="<<ob.name << endl;
    cout << "Roll="<<ob.roll << endl;
    cout << "Age:"<<ob.age << endl <<"Marks in 5 subjects: ";
    for (int i = 0; i < 5; i++)
    {
        cout << ob.marks[i] << " ";
    }
    ob.calculate();
}