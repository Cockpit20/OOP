#include <iostream>
#include <string.h>
using namespace std;

class dist
{
private:
    int feet;
    int inches;

public:
    void setData()
    {
        static int i = 1;
        cout << "Enter distance " << i++ << " in feet and inches: ";
        cin >> feet >> inches;
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
        cout << "Total Distance= " << C3.getfeet() << " feet " << C3.getinches() << " inches" << endl;
    }

    dist add(dist C2)
    {
        dist C3;
        int f = feet + C2.getfeet();
        int i = inches + C2.getinches();
        if (i >= 12)
        {
            i = i % 12;
            f++;
        }
        C3.feet = f;
        C3.inches = i;
        return C3;
    }
};

int main()
{
    dist C1;
    C1.setData();

    dist C2;
    C2.setData();

    dist C3;
    cout << "By Way 1: " << endl;
    C3.add(C1, C2);

    cout << "By Way 2: " << endl;
    C3 = C1.add(C2);
    cout << "Total Distance= " << C3.getfeet() << " feet " << C3.getinches() << " inches" << endl;
}
