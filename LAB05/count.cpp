#include <iostream>
using namespace std;

class object
{
private:
    static int data;

public:
    object()
    {
        data++;
    }
    static void display();
};

int object::data = 0;

void object::display()
{
    cout << "Number of objects created= "<<data << endl;
}

int main()
{
    object c1, c2, c3;
    object::display();
}