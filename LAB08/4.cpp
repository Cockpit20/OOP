#include <iostream>
#include <cstring>
using namespace std;
class add
{
public:
    char str[100];
    add()
    {
    }
    add(char str[])
    {
        strcpy(this->str, str);
    }
    add operator+(add &S2)
    {
        add S3;
        strcat(this->str, S2.str);
        strcpy(S3.str, this->str);
        return S3;
    }
};
int main()
{
    char str1[50], str2[50];
    cout << "Enter first string: ";
    cin.getline(str1, 50);
    cout << "Enter second string: ";
    cin.getline(str2, 50);

    add a1(str1);
    add a2(str2);
    add a3;
    a3 = a1 + a2;
    cout << "Concatenated String: " << a3.str;
}