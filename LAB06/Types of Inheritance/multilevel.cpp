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

int main()
{
    C ob;
    ob.a=5;
    ob.b=6;
    ob.c=7;
    cout<<ob.a<<ob.b<<ob.c;
}