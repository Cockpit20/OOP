#include <iostream>
using namespace std;

struct student
{
    char name[50];
    char address[500];
    float marks1;
    float marks2;
};

void total_marks(struct student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        float total=s[i].marks1+s[i].marks2;
        printf("Total of student %d is %.2f\n",i+1,total);
    }
}


int main()
{
    struct student s[100];
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "For student " << i + 1 << ": " << endl;
        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter address: ";
        cin >> s[i].address;

        cout<<"Enter markes in C language: ";
        cin>>s[i].marks1;

        cout<<"Enter marks in Information Sytsem: ";
        cin>>s[i].marks2;
    }
    cout << endl;
    total_marks(s, n);
}