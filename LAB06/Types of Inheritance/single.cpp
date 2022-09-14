#include <iostream>
using namespace std;

class base
{
public:
    int a;
};

class derived : public base
{
public:
    int b;
};

int main()
{
    derived ob;
    ob.a=5;
    ob.b=6;
    cout<<ob.a<<ob.b;
}