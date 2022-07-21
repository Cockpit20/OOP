#include<iostream>
using namespace std;

struct employee
{
    int id;
    char name[50];
    int age;
    float basic_salary;
};

void display_salary(struct employee *ptr,int n)
{
    cout<<endl<<"Emp.ID\tName\tAge\tGross Salary:"<<endl;
    for (int i = 0; i < n; i++)
    {
        float da=(80/100)*ptr[i].basic_salary;
        float hra=(10/100)*ptr[i].basic_salary;
        float gross_salary=ptr[i].basic_salary+da+hra;
        cout<<ptr[i].id<<"\t"<<ptr[i].name<<"\t"<<ptr[i].age<<"\t"<<gross_salary<<endl;
    }
}

int main()
{
    struct employee employees[1000],*ptr;
    ptr=employees;
    int n;
    cout<<"Enter the number of employees: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout << "For employee " << i + 1 << ": " << endl;
        cout << "Enter employee id: ";
        cin >> ptr[i].id;

        cout << "Enter name: ";
        cin >> ptr[i].name;

        cout << "Enter age: ";
        cin >> ptr[i].age;

        cout << "Enter basic salary: ";
        cin >> ptr[i].basic_salary;
    }
    display_salary(employees,n);
}