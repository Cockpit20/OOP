#include <iostream>
using namespace std;

class CentiMeter;

class Meter
{
private:
    float data;

public:
    void getvalue()
    {
        cout << "Enter the value in meters:";
        cin >> data;
    }

    friend float sum(Meter, CentiMeter);
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
    friend float sum(Meter, CentiMeter);
};

float sum(Meter a, CentiMeter b)
{
    float result;
    result = a.data + (b.data) / 100;
    return result;
}

void display(float result)
{
    cout << "Total distance in meters(m)= " << result << " m";
}

int main()
{
    Meter a;
    CentiMeter b;
    a.getvalue();
    b.getvalue();
    float s=sum(a, b);
    display(s);
}