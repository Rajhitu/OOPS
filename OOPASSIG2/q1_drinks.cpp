/*  Q1.
Assuming the class DRINKS_ dfined below, write functions in C++ to perform the following:
I)Write the objects of DRINKS_0 to a binary file.
(i)	  Read the objects of DRINKS5 from binary file and display them onscreen when DNAME has value "INDY COLA".
class DRINKS_
{int DCODE;
 char DNAME[13]; //Name of the drink
int DSIZE; //Size in liters
float DPRICE;
public:void getdrinks( )
{cin>>DCODE>>DNAME>>DSIZE>>DPRICE;}
void showdrinks( )

{cout<<DCODE<<DNAME<<DSIZE<<DPRICE<<endl;}char *getname( ){return DNAME;} };
*/
#include <iostream>
#include <fstream>
#include<string.h>
#include<cstdio>
using namespace std;
class DRINKS_025
{
    int DCODE;
    char DNAME[13]; // Name of the drink
    int DSIZE;      // Size in liters
    float DPRICE;

public:
    void getdrinks()
    {
        cout << "enter dcode dname dsize and price\n";
        cin >> DCODE >> DNAME >> DSIZE >> DPRICE;
    }
    void showdrinks()

    {
        cout <<"\nDCODE--->"<< DCODE<<"\nDNAME--->" << DNAME<<"\nDSIZE--->" << DSIZE <<"\nPRICE--->" << DPRICE << endl;
    }
    char * getname()
    {
        return DNAME;
    }
} s;



int main()
{
    int n = 1,c=0;
    char a[10];
    ofstream f("drinks.txt", ios::out | ios::binary);
    while (n)
    {

        for (int i = 0; i < n; i++)
        {
            s.getdrinks();
            f.write((char *)&s, sizeof(s));
        }
        cout << "Press 1 to enter more or 0 to exit\n";
        cin >> n;
    }
    cout << "writing in binary file finished\n";
    f.close();
    cout<<"which drink details u want to show\n ";
cin>>a;
    //strcpy(a, "INDYCOLA");
   


  

    ifstream fi("drinks.txt", ios::in | ios::binary);
   while (  fi.read((char *)&s, sizeof(s)))
   {
       if(strcmp(a,s.getname())==0)
       {
        s.showdrinks();  
       c++;
       }
         
    }

    if(c==0)
    {

        cout<<"no drinks found\n";
    }
    else
    {

        cout<<"drinks displayed....................... prog over\n";
    }
   


    return 0;
}