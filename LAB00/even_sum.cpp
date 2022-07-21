#include<iostream>
using namespace std;

void display_even(int a,int b)
{
    int sum=0;
    for (int i = a; i <= b; i++)
    {
        if(i%2==0)
        sum+=i;
    }
    cout<<sum<<endl;
    
}

void display_odd(int a,int b)
{
    int sum=0;
    for (int i = a; i <= b; i++)
    {
        if(i%2==1)
        sum+=i;
    }
    cout<<sum<<endl;
}

int main()
{
    int a,b;
    cin>>a>>b;

    display_even(a,b);
    display_odd(a,b);
}