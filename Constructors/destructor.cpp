#include<iostream>
using namespace std;

class student
{
private:
    int roll,age;
public:
    student()
    {
        roll=1;
        age=20;
    };
    student(int k,int l)
    {
        roll=k;
        age=l;
    }
    student(student &k)
    {
        roll=3;
        age=k.age;
    }
    ~student()
    {
        cout<<roll<<" destroyed"<<endl;
    };
};


int main()
{
    student s1;
    student s2(2,20);
    student s3(s2);
}