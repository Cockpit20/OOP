#include <iostream>
using namespace std;

class A
{
public:
    int a;
};

class B : public A
{
public:
    int b;
};

class C : public B
{
public:
    int c;
};

class D: public B
{
    public:
        int d;
};

int main()
{
    C ob;
    D ob2;
    ob.c=5;
    ob2.d=6;
    cout<<ob.c<<ob2.d;
}