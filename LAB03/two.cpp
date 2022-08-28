#include<iostream>
using namespace std;

class m_cm;
class feet_inches
{
private:
    float feet;
    float inches;
public:
    void setData()
    {
        cout<<"Enter distance in feet and inches: ";
        cin>>feet>>inches;
    }

    float getFeet()
    {
        return feet;
    }

    float getInches()
    {
        return inches;
    } 

    friend int compare(feet_inches&,m_cm&);
};

class m_cm
{
private:
    float meter;
    float centimeter;
public:
void setData()
    {
        cout<<"Enter distance in meter and cm: ";
        cin>>meter>>centimeter;
    }

    float getMeter()
    {
        return meter;
    }

    float getCentimeter()
    {
        return centimeter;
    } 

    friend int compare(feet_inches&,m_cm&);
};

int compare(feet_inches &var1, m_cm &var2)
{
    float c=0.3048;
    float total_in_m=var2.meter+var2.centimeter/1000;
    cout<<total_in_m<<endl;
    float total_in_f=(var1.feet+(var1.inches*0.083333))*c;
    cout<<total_in_f<<endl;
    if(total_in_f>total_in_m)
    return 1;
    else 
    return 0;
}

int main()
{
    feet_inches d1;
    m_cm d2;
    d1.setData();
    d2.setData();

    
    int val=compare(d1,d2);
    if(val==1)
    cout<<"Distance in feet and inches is the larger one.";
    else
    cout<<"Distance in meter and centimeter is the larger one.";
}