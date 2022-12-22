#include <iostream>

using namespace std;

class Parcel
{
private:
    int weight;

protected:
    int shipping_cost;

public:
    Parcel(int w)
    {
        weight = w;
        shipping_cost = 0;
    }
    void Call_shipping()
    {
        shipping_cost = weight * 10;
    }
};

class Box : public Parcel
{
private:
    int height, width, depth;

public:
    Box(int w, int h, int wd, int d) : Parcel(w)
    {
        height = h;
        width = wd;
        depth = d;
    }
    void Call_shipping()
    {
        Parcel::Call_shipping();
        if (height * width * depth > 3)
            shipping_cost += 30;
    }
    void print()
    {
        cout << "Total shipping cost: " << shipping_cost << endl;
    }
};

int main()
{
    Box b(10, 2, 2, 2);
    b.Call_shipping();
    b.print();
    return 0;
}