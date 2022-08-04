#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
    char name[50];
    int roll;
    float total_marks;

public:
    void setData(char n[], int r, float tm)
    {
        strcpy(name, n);
        roll = r;
        total_marks = tm;
    }
    string getName()
    {
        return name;
    }
    int getRoll()
    {
        return roll;
    }
    float getMarks()
    {
        return total_marks;
    }
};

int main()
{
    char name[50];
    int roll;
    float marks;
    cout << "Enter name:";
    cin.get(name, 50);

    cout << "Enter roll:";
    cin >> roll;

    cout << "Enter marks:";
    cin >> marks;

    student s;
    s.setData(name,roll,marks);
    cout << s.getName() << endl;
    cout << s.getRoll() << endl;
    cout << s.getMarks() << endl;
}
