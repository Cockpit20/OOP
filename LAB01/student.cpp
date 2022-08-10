#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    int marks[5];
};

void display(struct student s)
{
    cout << "The name of the student is " << s.name << endl;
    cout << "The roll of the student is " << s.roll << endl;
    cout << "Marks obtained in 5 subjects: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Marks in subject " << i + 1 << " :" << s.marks[i] << endl;
    }
}

int main()
{
    struct student s;

    cout << "Enter name: ";
    cin.get(s.name, 50);

    cout << "Enter roll number: ";
    cin >> s.roll;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks of subject " << i + 1 << ": ";
        cin >> s.marks[i];
    }
    display(s);
}