#include <iostream>
using namespace std;

int main()
{
    char *p = new char[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value: ";
        cin >> *(p+i);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << " "<<*(p+i);
    }

    cout<<"\nEnter name: ";
    cin>>p;
    cout<<p;
}