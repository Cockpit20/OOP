//passing object as function argument
#include <iostream>
using namespace std;
class student
{
    int roll;
    float avg;
    public:
    void get()
    {
        cout<<"enter the roll and average mark ";
        cin>>this->roll>>this->avg;
    }
    void show(student k)//k is the local object that receives the properties of object s2
    {
        cout<<"Roll = "<<k.roll<<" Average mark = "<<avg<<endl;
    }
    
};
int main()
{
    student s1,s2;
    s1.get();
    s2.get();
    s1.show(s2);
    //s2.show();

    return 0;
}

