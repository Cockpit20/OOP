#include<iostream>
#include<math.h>
using namespace std;

void increase(int &x)
{
    x++;
}

int main()
{
    int x=10;

    increase(x);

    cout<<x;
}