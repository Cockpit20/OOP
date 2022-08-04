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

    void setData(char n[], int r, float m[])
    {
        strcpy(name, n);
        roll = r;
        for (int i = 0; i < 5; i++)
        {
            marks[i]=m[i];
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
    
    float getTotalMarks(float m[])
    {
        float total=0;
        for (int i = 0; i < 5; i++)
        {
            total+=m[i];
        }
        return total;
    }

    float getPercent(float total)
    {
        return ((float)(total)/(float)(500))*(float)(100);
    }
};

int main()
{
    char name[50];
    int roll;
    float marks[50];
    cout << "Enter name:";
    cin.get(name, 50);

    cout << "Enter roll:";
    cin >> roll;

    cout << "Enter marks of 5 subjects:";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    student s;
    s.setData(name,roll,marks);
    cout << "Name:" << s.getName() << endl;
    cout << "Roll:" << s.getRoll() << endl;
    cout << "Total:" << s.getTotalMarks(marks) << endl;
    cout << "Percentage:" << s.getPercent(s.getTotalMarks(marks)) << endl;
}
