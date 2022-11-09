#include <iostream>
using namespace std;

class Shape
{
protected:
    float dimension;

public:
    void Dimension()
    {
        cin >> dimension;
    }

    virtual float calculateArea() = 0;
};

class Square : public Shape
{
public:
    float calculateArea()
    {
        return dimension * dimension;
    }
};

class Circle : public Shape
{
public:
    float calculateArea()
    {
        return 3.14 * dimension * dimension;
    }
};

int main()
{
    Square square;
    Circle circle;

    cout << "enter the th side of the square ";
    square.Dimension();
    cout << "\narea of square:" << square.calculateArea() << endl;

    cout << "enter the radius of the circle";
    circle.Dimension();
    cout << "\narea of circle:" << circle.calculateArea() << endl;

    return 0;
}