#include <iostream>
using namespace std;

class employee
{
public:
    char name[100];
    int id;
    float salary;
};

class Regular : public employee
{
public:
    float DA;
    float HRA;
    float basic_salary;

    void get()
    {
        cout<<"Enter name of the employee: ";
        cin>>name;

        cout<<"Enter employee id: ";
        cin>>id;

        cout<<"Enter basic salary of the employee: ";
        cin>>basic_salary;
    }

    void calculate_salary()
    {
        salary=0.8*basic_salary+0.1*basic_salary+basic_salary;
        cout<<"Salary of a Regular Employee= "<<salary<<endl;
    }
};

class Part_Time : public employee
{
public:
    float number_of_hours;
    float pay_per_hour;

    void get()
    {
        cout<<"Enter name of the employee: ";
        cin>>name;

        cout<<"Enter employee id: ";
        cin>>id;

        cout<<"Enter number of hours the employee works: ";
        cin>>number_of_hours;

        cout<<"Enter rate of pay per hour: ";
        cin>>pay_per_hour;
    }

    void calculate_salary()
    {
        salary=number_of_hours*pay_per_hour;
        cout<<"Salary of a Part-Time Employee= "<<salary<<endl;
    }
};

int main()
{
    Regular ob1;
    Part_Time ob2;

    ob1.get();
    ob1.calculate_salary();

    ob2.get();
    ob2.calculate_salary();
}