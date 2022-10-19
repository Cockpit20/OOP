#include <iostream>
#include <math.h>
using namespace std;

class circle
{
private:
    int x, y;
    float radius;

public:
    circle(int xco, int yco, float r)
    {
        x = xco;
        y = yco;
        radius = r;
    };
    circle(circle &c)
    {
        x = c.x;
        y = c.y;
        radius = c.radius;
    }
    double Distance(circle C1, circle C2)
    {
        int x = C2.x - C1.x;
        int y = C2.y - C1.y;
        double x2 = pow((double)x, 2);
        double y2 = pow((double)y, 2);
        return pow((x2 + y2), 0.5);
    }
    int IsInteresting(circle C1, circle C2,double d)
    {
        if ((float)d < C1.radius + C2.radius)
        return 1;
        else
        return 0;
    }
};

int main()
{
    int x1,y1,r1,x2,y2,r2;
    cout<<"For circle 1:\nEnter coordinates (x,y): ";
    cin>>x1>>y1;
    cout<<"Enter radius:";
    cin>>r1;
    cout<<"For circle 2:\nEnter coordinates (x,y): ";
    cin>>x2>>y2;
    cout<<"Enter radius:";
    cin>>r2;
    circle c1(x1, y1, r1);
    circle c2(x2 ,y2, r2); 

    double d=c1.Distance(c1, c2);
    cout << "Distance between centre of 2 circles= "<<d << endl;               

    int val=c1.IsInteresting(c1,c2,d);
    if(val==1)
    cout<<"Circles intersect each other."<<endl;
    else
    cout<<"Circles do not intersect each other"<<endl;
}