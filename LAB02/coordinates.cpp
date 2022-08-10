#include <iostream>
#include <math.h>
using namespace std;

class coordinates
{
private:
    int x;
    int y;

public:
    void setData()
    {
        static int i=1;
        cout << "Enter coordinates of point "<<i++<<": ";
        cin >> x >> y;
    }

    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }

    double findDistance(coordinates C1, coordinates C2)
    {
        int x = C2.getx() - C1.getx();
        int y = C2.gety() - C1.gety();
        double x2 = pow((double)x, 2);
        double y2 = pow((double)y, 2);
        return pow((x2 + y2), 0.5);
    }
};

int main()
{
    coordinates C1;
    C1.setData();
    coordinates C2;
    C2.setData();

    coordinates C;
    cout << C.findDistance(C1, C2);
}
