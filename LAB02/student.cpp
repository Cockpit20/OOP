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
    void setData()
    {
        cout << "Enter name:";
        cin.get(name, 50);

        cout << "Enter roll:";
        cin >> roll;

        cout << "Enter marks:";
        cin >> total_marks;
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
    student s;
    s.setData();
    cout << "Name:" << s.getName() << endl;
    cout << "Roll:" << s.getRoll() << endl;
    cout << "Total:" << s.getMarks() << endl;
}
