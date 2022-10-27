#include <iostream>
using namespace std;
class DISTANCE
{
public:
    int d;
    void input()
    {
        cout << "Enter distance: ";
        cin >> d;
    }
    void output()
    {
        cout << d << endl;
    }
    DISTANCE operator+(DISTANCE k)
    {
        DISTANCE dist;
        dist.d = d + k.d;
        return dist;
    }
    void operator>(DISTANCE ob)
    {
        if (d > ob.d)
            cout << d << " is larger" << endl;
        else if (d < ob.d)
            cout << ob.d << " is larger" << endl;
        else
            cout << "Both are same." << endl;
    }
    void operator==(DISTANCE ob)
    {
        if (d == ob.d)
            cout << "Same Distance";
        else
            cout << "Different Distance";
    }
};
int main()
{
    DISTANCE a, b, sum;
    a.input();
    b.input();
    sum = a + b;
    sum.output();
    a > b;
    a == b;
}