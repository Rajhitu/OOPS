/*Q8 Define a class to represent a bank account. Include the following members:
Data Members

b) name_025 of the depositor
b) Account number c) Type of account
c) d) Balance amount in the account
Member Functions
a) To assign initial value
b) To deposit an amount
c) To withdraw an amount after checking the balance
d) To display name_025 and balance
Write a main program to test the program.*/

#include <iostream>
#include<stdlib.h>
#include<cstdio>
using namespace std;

class bank
{
    int accno_025;
    char name_025[20],acctype_025[10];
    double accbalance_025;

public:
    void input()
    {
        cout << "enter the acc no.  , acc balance, name , type\n ";

        cin >> accno_025 >> accbalance_025;
        gets(name_025);
        gets(acctype_025);//why it is not reading???
    }
    void deposit()
    {
        double temp;
        cout << " \nhow much ammount you want to deposit ";
        cin >> temp;
        accbalance_025 = temp + accbalance_025;
        cout << "your acc balance is =" << accbalance_025;
    }
    void withdraw()
    {
        double temp;
        cout << " \nhow much money you want to withdraw  ";
        cin >> temp;
        if (temp > accbalance_025 && (accbalance_025 - temp) <= 500)
        {
            cout << "insufficient balance in your account";
        }
        else
        {
            cout << "ammount withdrawl succefull " << endl;
            accbalance_025 = accbalance_025 - temp;
            cout << "your acc balance left is = " << accbalance_025;
        }
    }

    void display()
    {

        cout <<" \n the name is " <<name_025<<" \nthe acc. balance" << accbalance_025;
    }
};
int main()
{   bank b;
   b.input();
   b.deposit();
   b.withdraw();
   b.display();
    return 0;
}