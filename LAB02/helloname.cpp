#include <iostream>
using namespace std;

class greeting
{
private:
    char name[100];
public:
    void get()
    {
        cout<<"Enter your name: ";
        cin.get(name,100);
    }
    void display()
    {
        cout << "Hello," << name;
    }
};



int main()
{
    greeting greet;
    greet.get();
    greet.display();
}