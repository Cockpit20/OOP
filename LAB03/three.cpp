#include<iostream>
using namespace std;

class random
{
private:
    int data;
    static int count;
public:

    void setData()
    {
        cout<<"Enter a number: ";
        cin>>data;
        count++;
    }

    void displayData()
    {
        cout<<"The number is "<<data<<endl;
        count++;
    }

    friend void getCount(random ob)
    {
        count++;
        cout<<"Number of functions called is "<<count;
    }
};

int random::count=0;

int main()
{
    random ob;
    ob.setData();
    ob.displayData();
    getCount(ob);
}