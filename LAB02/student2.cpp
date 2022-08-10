#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
    char name[50];
    int roll;
    float marks[5];

public:
    void setData()
    {
        cout << "Enter name:";
        cin.get(name, 50);

        cout << "Enter roll:";
        cin >> roll;

        cout << "Enter marks of 5 subjects:";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    string getName()
    {
        return name;
    }
    int getRoll()
    {
        return roll;
    }

    float getTotalMarks()
    {
        float total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        return total;
    }

    float getPercent()
    {
        return ((float)(getTotalMarks()) / (float)(500)) * (float)(100);
    }
};

int main()
{
    student s;
    s.setData();
    cout << "Name:" << s.getName() << endl;
    cout << "Roll:" << s.getRoll() << endl;
    cout << "Total:" << s.getTotalMarks() << endl;
    cout << "Percentage:" << s.getPercent() << endl;
}
