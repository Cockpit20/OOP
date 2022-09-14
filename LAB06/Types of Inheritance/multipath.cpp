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

class C : public A
{
public:
    int c;
};

class D : public B, public C
{
public:
    int d;
};

int main()
{
    D ob;
    ob.b = 6;
    ob.c = 7;
    ob.d = 8;
    cout << ob.b << ob.c << ob.d;
}