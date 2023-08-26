/*
Q7.Following is the structure of each record in a data file named“PRODUCT.DAT”.
Struct PROD
{char PCODE[10];
 char DESC[10];
 int stock;
 };
 Write a function in C++ to update the
file with a new value of stock. Thevalue of stock and the PCODE , whose stock to be updated
are read duringthe execution of the program.*/

#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
using namespace std;

struct PROD
{
    char PCODE[10];
    char DESC[10];
    int stock;
} s;

void change_stock(char pcode[], int n)

{
    int c = 0,ro;
    ifstream iff("prod.txt", ios::binary);
    ofstream of("newprod.txt", ios::binary);

    while (iff.read((char *)&s, sizeof(s)))
    {
        if (strcmp(s.PCODE, pcode) == 0 && s.stock == n)
        {
            cout << "enter the value of new stock\n";
            cin >> s.stock;
            of.write((char *)&s, sizeof(s));
            c++;
        }
        else
        {
            of.write((char *)&s, sizeof(s));
        }
    }
   
    if (c == 0)
    {

        cout << "no prod found\n";
    }
    else
    {
        cout << "product updated successfully\n";
    }
    iff.close();
    of.close();
    remove("prod.txt");
    rename("newprod.txt", "prod.txt");
}
int main()
{
    int stck;
    char pcode[10];
    int n = 1;
    ofstream f("prod.txt", ios::out | ios::binary);
    while (n)
    {

       

            cout << "enter prodcode description and stock of product:";

            cin >> s.PCODE >> s.DESC >> s.stock;

            f.write((char *)&s, sizeof(s));
        
        cout << "press 1 to enter next prod and 0 to exit\n";
        cin >> n;
    }
    f.close();
    cout << "writing in binary file finished\n";

    cout << "enter the stock and pcode u want to change\n";
    cin >> stck >> pcode;
    change_stock(pcode, stck);
    ifstream fi("prod.txt", ios::in | ios::binary);

    while (fi.read((char *)&s, sizeof(s)))
    {
        cout << "Prodcode--->" << s.PCODE << "\ndesc--->" << s.DESC << "\nstock--->" << s.stock;
        cout << "\n........................................................\n";
    }

    fi.close();

    return 0;
}