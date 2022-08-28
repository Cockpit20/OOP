#include <iostream>
using namespace std;
class two;
class one
{
    int data1;

public:
    void setData()
    {
        cout << "Enter data for class 1: ";
        cin >> data1;
    }
    int getData()
    {
        return data1;
    }
    friend void swap(one &, two &);
};
class two
{
    int data2;

public:
    void setData()
    {
        cout << "Enter data for class 2: ";
        cin >> data2;
    }
    int getData()
    {
        return data2;
    }
    friend void swap(one &, two &);
};

void swap(one &var1, two &var2)
{
    int temp = var1.data1;
    var1.data1 = var2.data2;
    var2.data2 = temp;
}

int main()
{
    one o1;
    two o2;
    o1.setData();
    o2.setData();

    cout << "Before swap: " << o1.getData() << " and " << o2.getData() << endl;
    swap(o1, o2);
    cout << "After swap: " << o1.getData() << " and " << o2.getData();
}