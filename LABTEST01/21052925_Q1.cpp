#include <iostream>
#include <math.h>
using namespace std;

class Circle
{
private:
    int x, y;
    float radius;

public:
    Circle(int xco, int yco, float r)
    {
        x = xco;
        y = yco;
        radius = r;
    };
    Circle(Circle &c)
    {
        x = c.x;
        y = c.y;
        radius = c.radius;
    }
    friend double Distance(Circle &, Circle &);
    int IsInteresting(Circle C1, Circle C2, double d)
    {
        if ((float)d < C1.radius + C2.radius)
            return 1;
        else
            return 0;
    }
};

double Distance(Circle &C1, Circle &C2)
{
    int x = C2.x - C1.x;
    int y = C2.y - C1.y;
    double x2 = pow((double)x, 2);
    double y2 = pow((double)y, 2);
    return pow((x2 + y2), 0.5);
}

int main()
{
    int x1, y1, x2, y2;
    float r1, r2;
    cout << "For Circle 1:\nEnter coordinates (x,y): ";
    cin >> x1 >> y1;
    cout << "Enter radius:";
    cin >> r1;
    cout << "For Circle 2:\nEnter coordinates (x,y): ";
    cin >> x2 >> y2;
    cout << "Enter radius:";
    cin >> r2;
    Circle c1(x1, y1, r1);
    Circle c2(x2, y2, r2);
    Circle c3(c2);

    double d = Distance(c1, c2);
    cout << "Distance between centre of 2 Circles= " << d << endl;

    int val = c1.IsInteresting(c1, c2, d);
    if (val == 1)
        cout << "Circles intersect each other." << endl;
    else
        cout << "Circles do not intersect each other" << endl;
}