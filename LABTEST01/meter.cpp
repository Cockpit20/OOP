#include <iostream>
using namespace std;

class CentiMeter;

class Meter
{
private:
    float data;
    int r;

public:
    void getvalue()
    {
        cout << "Enter the value in meters:";
        cin >> data;
    }

    friend void sum(Meter, CentiMeter);
    friend void display(Meter, CentiMeter);
};

class CentiMeter
{
private:
    float data;

public:
    void getvalue()
    {
        cout << "Enter the value in centimeter:";
        cin >> data;
    }
    friend void sum(Meter, CentiMeter);
    friend void display(Meter, CentiMeter);
};

void sum(Meter a, CentiMeter b)
{
    float result;
    result = a.data + (b.data) / 100;
    cout << "Total distance in meters(m)= " << result << "m";
}

int main()
{
    Meter a;
    CentiMeter b;
    a.getvalue();
    b.getvalue();
    sum(a, b);
}