#include <iostream>
#include <string.h>
using namespace std;

class employee
{
private:
    int id;
    char name[50];
    int age;
    float basic_salary;

public:
    void setData(int i, char n[], int a, float bs)
    {
        id = i;
        strcpy(name, n);
        age = a;
        basic_salary = bs;
    }

    int getid()
    {
        return id;
    }

    string getname()
    {
        return name;
    }

    int getage()
    {
        return age;
    }

    float getBasicSalary()
    {
        return basic_salary;
    }

    float getGrossSalary(float basic_salary)
    {
        float da = 0.8 * basic_salary;
        float hra = 0.1 * basic_salary;
        float gross_salary = basic_salary + da + hra;
        return gross_salary;
    }
};

int main()
{
    int id[100], age[100];
    char name[100][50];
    float salary[100];
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "For employee " << i + 1 << ": " << endl;
        cout << "Enter employee id: ";
        cin >> id[i];

        cout << "Enter name: ";
        cin >> name[i];

        cout << "Enter age: ";
        cin >> age[i];

        cout << "Enter basic salary: ";
        cin >> salary[i];
    }

    cout << endl
         << "Emp.ID\tName\tAge\tBasic Salary\tGross Salary:" << endl;
    for (int i = 0; i < n; i++)
    {
        employee e;
        e.setData(id[i],name[i],age[i],salary[i]);
        float gross_salary = e.getGrossSalary(salary[i]);
        cout << e.getid() << "\t" << e.getname() << "\t" << e.getage() << "\t" << e.getBasicSalary() << "\t\t" << gross_salary << endl;
    }
}
