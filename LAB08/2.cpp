#include <iostream>
using namespace std;
class A
{
public:
    int a[5];
    friend istream &operator>>(istream &input, A &ob);
    friend ostream &operator<<(ostream &output, A &ob);
};
istream &operator>>(istream &input, A &ob)
{
    for (int i = 0; i < 5; i++)
    {
        input >> ob.a[i];
    }
    return input;
}
ostream &operator<<(ostream &output, A &ob)
{
    for (int i = 0; i < 5; i++)
    {
        output << ob.a[i] << " ";
    }
    return output;
}

int main()
{
    A obj;
    cout << "Enter 5 integers: \n";
    cin >> obj;
    cout << "\nDisplaying" << endl;
    cout << obj;
}