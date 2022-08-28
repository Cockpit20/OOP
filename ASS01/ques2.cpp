#include<iostream>
using namespace std;

class mark;
class student
{
private:
    char name[50];
    int roll;
    int age;
public:
    void setData()
    {
        cout<<"Enter your name: ";
        cin.get(name,50);

        cout<<"Enter your roll: ";
        cin>>roll;

        cout<<"Enter your age: ";
        cin>>age;
    }

    friend void display_details(student&,mark&);
};

class mark
{
private:
    float marks[3];
    char grade;
public:
    void setData()
    {
        for (int i = 0; i < 3; i++)
        {
            cout<<"Enter marks in subject "<<i+1<<": ";
            cin>>marks[i];
        }
        cout<<"Enter grade: ";
        cin>>grade;
    }
    friend void display_details(student&,mark&);
};

void display_details(student &var1,mark &var2)
{
    cout<<endl<<endl<<"DETAILS OF THE STUDENT: "<<endl;
    cout<<"Name: "<<var1.name<<endl;
    cout<<"Roll: "<<var1.roll<<endl;
    cout<<"Age: "<<var1.age<<endl;
    cout<<"Marks in 3 subjects: ";
    for (int i = 0; i < 3; i++)
    {
        cout<<var2.marks[i]<<" ";
    }
    cout<<endl<<"Grade: "<<var2.grade<<endl;
}



int main()
{
    student s;
    mark m;
    s.setData();
    m.setData();
    display_details(s,m);
}