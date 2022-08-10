#include <iostream>
#include <string.h>
using namespace std;

class employee
{
private:
    int n;
    int id[100], age[100];
    char name[100][50];
    float salary[100];

public:
    void setData()
    {
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
    }

    int getid(int i)
    {
        return id[i];
    }

    string getname(int i)
    {
        return name[i];
    }

    int getage(int i)
    {
        return age[i];
    }

    float getBasicSalary(int i)
    {
        return salary[i];
    }

    float getGrossSalary(int i)
    {
        float da = 0.8 * salary[i];
        float hra = 0.1 * salary[i];
        float gross_salary = salary[i] + da + hra;
        return gross_salary;
    }

    void displayData()
    {
        cout << endl
             << "Emp.ID\tName\tAge\tBasic Salary\tGross Salary:" << endl;
        for (int i = 0; i < n; i++)
        {
            float gross_salary = getGrossSalary(i);
            cout << getid(i) << "\t" << getname(i) << "\t" << getage(i) << "\t" << getBasicSalary(i) << "\t\t" << gross_salary << endl;
        }
    }
};

int main()
{
    employee e;
    e.setData();
    e.displayData();
}
