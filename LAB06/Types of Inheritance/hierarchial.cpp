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

class D : public A
{
public:
    int d;
};

int main()
{
    B ob1;
    C ob2;
    D ob3;

    ob1.b = 6;
    ob2.c = 7;
    ob3.d = 8;
    cout << ob1.b << ob2.c << ob3.d;
}