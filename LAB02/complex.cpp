#include <iostream>
#include <string.h>
using namespace std;

class complex
{
private:
    int real;
    int img;

public:
    void setData(int r,int i)
    {
        real=r;
        img=i;
    }

    int getReal()
    {
        return real;
    }

    int getImg()
    {
        return img;
    }
};

int main()
{
    int real[5],img[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"For number "<<i+1<<": "<<endl;
        cout<<"Enter the real part:";
        cin>>real[i];
        cout<<"Enter the imaginary part:";
        cin>>img[i];
    }

    cout<<"The numbers are: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        complex c;
        c.setData(real[i],img[i]);
        cout<<c.getReal()<<"+"<<c.getImg()<<"i"<<endl;
    }

}
