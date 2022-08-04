//simple class program to input and output values
#include <iostream>
using namespace std;
class student
{
    private:
        int roll; //roll and avg are data members and by default private
        float avg;
    public:
        void get() //get is the public member function to input the values defined here
        {
            cout<<"Enter the roll number and average mark "; //cout is the object of ostream class(uses insertion operator <<)
            cin>>roll>>avg; //cin is the object of istream class(uses extraction operator >>)
        }
    void show();//show is only declared here
};
 void student::show() //show is defined here using class name and scope resolution operator(::)
    {
        cout<<"Roll = "<<roll<<" Average mark = "<<avg<<endl; //endl is the manipulator
    }

int main()
{
    student s1,s2;//s1 and s2 are the instances of the student class known as objects
    s1.get();
    cin.ignore();//to flush the input stream buffer
    s2.get();
    s1.show();
    s2.show();
}

