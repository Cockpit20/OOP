#include <iostream>
#include <string.h>
using namespace std;

class complex
{
private:
    int real[10], img[10];

public:
    void setData()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "For number " << i + 1 << ": " << endl;
            cout << "Enter the real part:";
            cin >> real[i];
            cout << "Enter the imaginary part:";
            cin >> img[i];
        }
    }

    void displayData()
    {
        cout << "The numbers are: " << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << real[i] << "+" << img[i] << "i" << endl;
        }
    }
};

int main()
{
    complex c;
    c.setData();
    c.displayData();
}
