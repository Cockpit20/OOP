#include <iostream>
using namespace std;

class Int
{
private:
    int a;

public:
    void get()
    {
        cout << "Enter a number: ";
        cin >> a;
    }
    void display()
    {
        cout << a << endl;
    }
    Int operator+(Int ob)
    {
        Int temp;
        temp.a = a + ob.a;
        if (temp.a > INT32_MAX || temp.a < INT32_MIN)
        {
            cout << "Exceeding Range!";
            exit(0);
        }
        return temp;
    }
    Int operator-(Int ob)
    {
        Int temp;
        temp.a = a - ob.a;
        if (temp.a > INT32_MAX || temp.a < INT32_MIN)
        {
            cout << "Exceeding Range!";
            exit(0);
        }
        return temp;
    }
    Int operator*(Int ob)
    {
        Int temp;
        temp.a = a * ob.a;
        if (temp.a > INT32_MAX || temp.a < INT32_MIN)
        {
            cout << "Exceeding Range!";
            exit(0);
        }
        return temp;
    }
    Int operator/(Int ob)
    {
        Int temp;
        temp.a = a / ob.a;
        if (temp.a > INT32_MAX || temp.a < INT32_MIN)
        {
            cout << "Exceeding Range!";
            exit(0);
        }
        return temp;
    }
};

int main()
{
    Int a, b;
    a.get();
    b.get();

    Int p, s, m, d;

    p = a + b;
    s = a - b;
    m = a * b;
    d = a / b;

    p.display();
    s.display();
    m.display();
    d.display();
}