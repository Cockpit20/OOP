//scope of a variable
#include <iostream>
using namespace std;
int i = 10; //i is now a gloabal variable to main() 
int main()
{
    int i =20;
    {
       int i =30; 
       cout<<i<<endl;//prints 30
    }
    cout<<i<<endl; //prints 20
    cout<<::i<<endl;//prints the global variable value 10
     return 0;
}
