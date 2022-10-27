#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    float imaginary;
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Emter imaginary part: ";
        cin >> imaginary;
    }
    Complex operator+(Complex obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imaginary = imaginary + obj.imaginary;
        return res;
    }
    void displaySum()
    {
        cout << "Sum = " << real << " + " << imaginary << "i" << endl;
    }
    void display()
    {
        cout << "Real: " << real << endl;
        cout << "Imaginary: " << imaginary << endl;
    }
    Complex operator++(int)
    {
        Complex inc;
        inc.real = real++;
        inc.imaginary = imaginary++;
        return inc;
    }
    Complex operator++()
    {
        Complex inc;
        inc.real = ++real;
        inc.imaginary = ++imaginary;
        return inc;
    }
};
int main()
{
    Complex c1, c2;
    c1.input();
    c2.input();
    Complex c3 = c1 + c2;
    c3.displaySum();
    cout << "Post Increment" << endl;
    cout << "Before Increment: " << endl;
    c3.display();
    c3 = c3++;
    cout << "After Increment: " << endl;
    c3.display();
    cout << "Pre Increment" << endl;
    cout << "Before Increment: " << endl;
    c3.display();
    c3 = ++c3;
    cout << "After Increment: " << endl;
    c3.display();
}