//accessing private member function 
#include <iostream>
using namespace std;
class student
{
    int roll;
    float avg;
    public:
    void get()
    {
        cout<<"Enter roll and average mark: ";
        cin>>roll>>avg;
        show(); //as show() function is private,its called from another public member function
    }
    private:
    void show() //private member function
    {
        cout<<"Roll = "<<roll<<" Average mark = "<<avg<<endl;
    }
};
int main()
{
     student s1;
     s1.get();
     //s1.show();//can't access private member function
     return 0;
}
