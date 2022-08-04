//use of this pointer 
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
    void show()
    {
        cout<<"Roll = "<<this->roll<<" Average mark = "<<this->avg<<endl;
    }
    
};
int main()
{
    student s1,s2;
    s1.get();
    s2.get();
    s1.show();
    s2.show();

    return 0;
}

