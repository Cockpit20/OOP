#include<iostream>
using namespace std;
#include<math.h>

class interest;
class basic
{
private:
    float loan_amount;
public:
    void setData()
    {
        cout<<"Enter the loan amount: ";
        cin>>loan_amount;
    }
    friend void calculate(basic&,interest&);
};

class interest
{
private:
    float years;
    float rate_of_interest;
public:
    void setData()
    {
        cout<<"Enter the number of years: ";
        cin>>years;

        cout<<"Enter rate of interest: ";
        cin>>rate_of_interest;
    }
    friend void calculate(basic&,interest&);
};

void calculate(basic &var1,interest &var2)
{
    float si=(var1.loan_amount*var2.rate_of_interest*var2.years)/(float)(100);
    printf("Simple Interest= %.2f\n",si);
    float ci=(var1.loan_amount*(pow((float)(1)+(var2.rate_of_interest/(float)(100)),var2.years)));
    printf("Compund Interest= %.2f",ci);
}

int main()
{
    basic b;
    interest i;
    b.setData();
    i.setData();
    calculate(b,i);
}