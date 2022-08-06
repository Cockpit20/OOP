#include <iostream>
#include <string.h>
using namespace std;

class dist
{
private:
    int feet;
    int inches;

public:
    void setData(int f, int i)
    {
        feet = f;
        inches = i;
    }

    int getfeet()
    {
        return feet;
    }

    int getinches()
    {
        return inches;
    }

    void add(dist C1, dist C2)
    {
        dist C3;
        int feet = C1.getfeet() + C2.getfeet();
        int inches = C1.getinches() + C2.getinches();
        if (inches >= 12)
        {
            inches = inches % 12;
            feet++;
        }
        C3.feet = feet;
        C3.inches = inches;
        cout << C3.getfeet() << " feet " << C3.getinches() << " inches"<<endl;
    }
};

int main()
{
    int d1_feet, d2_feet, d3_feet, d1_inch, d2_inch, d3_inch;
    cout << "Enter dist 1 in feet and inches: ";
    cin >> d1_feet >> d1_inch;
    dist C1;
    C1.setData(d1_feet, d1_inch);

    cout << "Enter dist 2 in feet and inches: ";
    cin >> d2_feet >> d2_inch;
    dist C2;
    C2.setData(d2_feet, d2_inch);

    dist C3;

    C3.add(C1, C2);
}
