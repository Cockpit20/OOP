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
        static int i=1;
        cout << "Enter distance "<<i++<<" in feet and inches: ";
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
        cout << C3.getfeet() << " feet " << C3.getinches() << " inches" << endl;
    }
};

int main()
{
    dist C1;
    C1.setData();

    dist C2;
    C2.setData();

    dist C3;
    C3.add(C1, C2);
}
