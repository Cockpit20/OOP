#include<iostream>
using namespace std;

class student
{
private:
    int roll,age;
public:
    student() //default constructor
    {
        roll=1;
        age=20;
    };
    student(int k,int l) //parameterised constructor
    {
        roll=k;
        age=l;
    }
    student(student &k) //copy constructor
    {
        roll=3;
        age=k.age;
    }
    ~student() // destructor
    {
        cout<<roll<<" destroyed"<<endl;
    };
    friend void xyz(student &s)
    {
        cout<<"Hello DP!"<<endl;
    }
    void show()
    {
        cout<<"Hello!"<<endl;
    }
};

int main()
{
    student s1;
    student s2(2,20);
    student s3(s2);
    xyz(s2);

    student *p;
    p=new student;//un-named instance
    p->show();
    delete p;
}