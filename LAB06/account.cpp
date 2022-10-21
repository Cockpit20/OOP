#include <iostream>
using namespace std;

class account
{
public:
    int account_number;
    char name[100];
    float balance;
};

class savings : public account
{
public:
    float min_balance;

    void get()
    {
        cout << "For savings account:\nEnter the account number: ";
        cin >> account_number;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter the balance: ";
        cin >> balance;

        cout << "Enter the minimum balance: ";
        cin >> min_balance;
    }

    void deposit_money()
    {
        int amount;
        cout << "Enter the money to be deposited: ";
        cin >> amount;

        balance = balance + amount;
    }

    void withdraw()
    {
        int amount;
        cout << "Enter the amount to be withdrawn: ";
        cin >> amount;

        if (balance - amount < min_balance)
            cout << "Money cannot be withdrawn. Minimum balance reached. \nMaximum amount that can be withdrawn= " << balance - amount << endl;
        else
        {
            balance = balance - amount;
            cout << "Rs." << amount << " is withdrawn." << endl;
        }
    }

    void display()
    {
        cout << "The updated balance is =Rs. " << balance << endl;
    }
};

class current : public account
{
public:
    float over_due_amount;

    void get()
    {
        cout << "For current account:\nEnter the account number: ";
        cin >> account_number;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter the balance: ";
        cin >> balance;

        cout << "Enter the over due ammount: ";
        cin >> over_due_amount;
    }

    void deposit_money()
    {
        int amount;
        cout << "Enter the money to be deposited: ";
        cin >> amount;

        balance = balance + amount;
    }

    void withdraw()
    {
        int amount;
        cout << "Enter the amount to be withdrawn: ";
        cin >> amount;

        if (balance-amount<over_due_amount)
            cout << "Money cannot be withdrawn. Overdue amount reached." << endl;
        else
        {
            balance = balance - amount;
            cout << "Rs." << amount << " is withdrawn." << endl;
        }
    }

    void display()
    {
        cout << "The updated balance is =Rs. " << balance << endl;
    }
};

int main()
{
    savings s;
    current c;

    s.get();
    s.deposit_money();
    s.display();
    s.withdraw();
    s.display();

    c.get();
    c.deposit_money();
    c.display();
    c.withdraw();
    c.display();
}