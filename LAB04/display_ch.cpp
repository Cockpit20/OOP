#include<iostream>
#include<math.h>
using namespace std;

void display(char ch,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<ch<<" ";
    }
}

void display(char ch)
{
    for (int i = 0; i < 80; i++)
    {
        cout<<ch<<" ";
    }
}

void display()
{
    for (int i = 0; i < 80; i++)
    {
        cout<<"* ";
    }
}

int main()
{
    char ch;
    int n;
    cout<<"Enter character: ";
    cin>>ch;
    cout<<"Enter limit: ";
    cin>>n;

    display();
    cout<<endl;

    display(ch);
    cout<<endl;
    
    display(ch,n);
}