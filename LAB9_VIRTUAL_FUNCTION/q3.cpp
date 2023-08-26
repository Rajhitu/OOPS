/*Q3.Create a class which stores account number, customer name and balance.
Derive two classes from ‘Account’ class: ‘Savings’ and ‘Current’. The
‘Savings’ class stores minimum balance. The ‘Current’ class stores the
over-due amount. Include member functions in the appropriate class for

-deposit money
-withdraw [For saving account minimum balance should be
checked.]
[For current account overdue amount should be calculated.]
-display balance
Display data from each class using virtual function.*/

#include <bits/stdc++.h>

    using namespace std;

class bank

{

public:
    int minbal, bal, wd, dp, s_bal, c_bal;

    char name[20];

    long int ac;

    void input(const char *n, int b, long int a)

    {

        strcpy(name, n);

        bal = b;

        ac = a;
    }

    void saving(int w, int d)

    {

        minbal = 1000;

        wd = w;

        dp = d;

        s_bal = bal + dp - wd;
    }

    void current(int w, int d)

    {

        wd = w;

        dp = d;

        c_bal = bal + dp - wd;
    }

    virtual void display()

    {
    }
};

class save : public bank

{

public:
    void display()

    {

        cout << "\naccount number: " << ac;

        cout << "\ncustomer name: " << name;

        cout << "\nminimum balance: " << minbal;

        if (s_bal < minbal)

        {

            cout << "\nyou can not withdraw balance!!.\nyour balance is: " << s_bal;
        }

        else

            cout << "\nyou can withdraw balance.\nyour balance is: " << s_bal;
    }
};

class curr : public bank

{

public:
    void display()

    {

        cout << "\naccount number: " << ac;

        cout << "\ncustomer name: " << name;

        if (c_bal < 0)

        {

            cout << "\noverdued ammount";
        }

        else

            cout << "\nyour current balance: " << c_bal;
    }
};

int main()

{

    save s;

    curr c;

    bank *b[2];

    b[0] = &s;

    b[1] = &c;

    cout << "\nfor saving account: ";

    b[0]->input("ABHI", 3000, 8392649);

    b[0]->saving(1000, 500);

    b[0]->display();

    cout << "\n\nfor current account: ";

    b[1]->input("MARTIN", 4000, 1723465);

    b[1]->current(2000, 1000);

    b[1]->display();

    return 0;
}
