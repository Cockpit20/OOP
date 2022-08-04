#include <iostream>
#include <math.h>
using namespace std;

class coordinates
{
private:
    int x;
    int y;

public:
    void setData(int xco,int yco)
    {
        x=xco;
        y=yco;
    }

    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }

    double distance(coordinates C1,coordinates C2)
    {
        int x=C2.getx()-C1.getx();
        int y=C2.gety()-C1.gety();
        double x2=pow((double)x,2);
        double y2=pow((double)y,2);
        return pow((x2+y2),0.5);
    }
    
};

int main()
{
    int x1,y1,x2,y2;
    cout<<"Enter coordinates of point 1: ";
    cin>>x1>>y1;

    cout<<"Enter coordinates of point 2: ";
    cin>>x2>>y2;

    coordinates C1;
    C1.setData(x1,y1);
    coordinates C2;
    C2.setData(x2,y2);
    coordinates C;

    cout<<C.distance(C1,C2);
}
