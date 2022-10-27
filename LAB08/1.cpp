#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;

public:
    void readDistance(void)
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void dispDistance(void)
    {
        cout << "Feet:" << feet << "\t"
             << "Inches:" << inches << endl;
    }

    Distance operator+(Distance &dist1)
    {
        Distance tempD;
        tempD.inches = inches + dist1.inches;
        tempD.feet = feet + dist1.feet + (tempD.inches / 12);
        tempD.inches = tempD.inches % 12;
        return tempD;
    }
    Distance operator+(int k)
    {
        feet = feet + (inches + k) / 12;
        inches = (inches + k) % 12;
        return *this;
    }
    Distance operator-()
    {
        inches = -inches;
        feet = -feet;
        return *this;
    }
};

int main()
{
    Distance D1, D2, D3;

    cout << "Enter first  distance:" << endl;
    D1.readDistance();
    cout << endl;

    cout << "Enter second distance:" << endl;
    D2.readDistance();
    cout << endl;

    D3 = D1 + D2;

    cout << "Total Distance:" << endl;
    D3.dispDistance();

    cout << "Adding 4 inches to Distance 1:" << endl;
    D2 = D1 + 4;
    D2.dispDistance();

    cout << "Implementing unary - operator on Distance 1:" << endl;
    D2 = -D1;
    D2.dispDistance();
}