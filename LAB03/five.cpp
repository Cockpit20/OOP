#include<iostream>
using namespace std;

class book
{
private:
    int n;
    char name[1000][100];
    char author[1000][100];
    float price[1000];
    float a,b;
    
public:
    void setData()
    {
        cout<<"Enter the number of books: ";
        cin>>n;

        for (int i = 0; i < n; i++)
        {
            cout<<"For book "<<i+1<<": "<<endl;
            cout<<"Enter name: ";
            cin>>name[i];

            cout<<"Enter name of author: ";
            cin>>author[i];

            cout<<"Enter total price: ";
            cin>>price[i];
        }
    }

    friend void display_info(book data)
    {
        cout<<"Enter the range: ";
        cin>>data.a>>data.b;

        cout<<"The books in this price range: "<<endl;
        for (int i = 0; i < data.n; i++)
        {
            if(data.price[i]>=data.a && data.price[i]<=data.b)
            cout<<data.name[i]<<"- "<<data.author[i]<<endl;
        }
    }
};


int main()
{
    book b;
    b.setData();
    display_info(b);
}