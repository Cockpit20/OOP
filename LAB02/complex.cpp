#include <iostream>
#include <string.h>
using namespace std;

class complex
{
private:
    int real[5], img[5];

public:
    void setData()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "For number " << i + 1 << ": " << endl;
            cout << "Enter the real part:";
            cin >> real[i];
            cout << "Enter the imaginary part:";
            cin >> img[i];
        }
    }

    int getReal(int i)
    {
        return real[i];
    }

    int getImg(int i)
    {
        return img[i];
    }

    void displayData()
    {
        cout << "The numbers are: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << getReal(i) << "+" << getImg(i) << "i" << endl;
        }
    }
};

int main()
{
    complex c;
    c.setData();
    c.displayData();
}
