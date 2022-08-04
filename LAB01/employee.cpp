#include<iostream>
using namespace std;

struct employee
{
    int id;
    char name[50];
    int age;
    float basic_salary;
};

void display_salary(struct employee *employees,int n)
{
    cout<<endl<<"Emp.ID\tName\tAge\tBasic Salary\tGross Salary:"<<endl;
    for (int i = 0; i < n; i++)
    {
        float gross_salary=0.8*((employees+i)->basic_salary)+0.1*((employees+i)->basic_salary)+((employees+i)->basic_salary);
        cout<<(employees+i)->id<<"\t"<<(employees+i)->name<<"\t"<<(employees+i)->age<<"\t"<<(employees+i)->basic_salary<<"\t\t"<<gross_salary<<endl;
    }
}

int main()
{
    struct employee employees[1000];
    int n;
    cout<<"Enter the number of employees: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout << "For employee " << i + 1 << ": " << endl;
        cout << "Enter employee id: ";
        cin >> employees[i].id;

        cout << "Enter name: ";
        cin >> employees[i].name;

        cout << "Enter age: ";
        cin >> employees[i].age;

        cout << "Enter basic salary: ";
        cin >> employees[i].basic_salary;
    }
    display_salary(employees,n);
}