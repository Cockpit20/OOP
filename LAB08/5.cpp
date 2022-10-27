#include <iostream>
using namespace std;
class TIME
{
public:
    int d;
    void input()
    {
        cout << "Enter time: ";
        cin >> d;
    }
    void output()
    {
        cout << d << endl;
    }
    TIME operator+(TIME k)
    {
        d = d + k.d;
        return *this;
    }
    void operator==(TIME ob)
    {
        if (d == ob.d)
            cout << "Same Time";
        else
            cout << "Different Time";
    }
};
int main()
{
    TIME a, b, sum;
    a.input();
    b.input();
    sum = a + b;
    sum.output();
    a == b;
}