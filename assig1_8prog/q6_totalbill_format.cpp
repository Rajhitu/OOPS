/*Q6.Write a program to enter the code, name and price of items. The user must feed the
quantity in which he wants a product. The program must calculate and display the
final bill of 10 items in the following format.
Sl.No. Code Name Price Quantity Total
-------------------------------------------------------------------------------------
1. rib001 Printercatrige 300 2 600
2. Pap45 A4 size paper 200 0 0
3. Bk216 Computer book 350 5 1750
--------------------------------------------------------------------------------------
Total = Rs.2350/-*/
#include<iostream>
using namespace std;
class item
{
char code[10],name[10];
int price,quantity;
public:
void input(int i)
{
    cout<<"enter code name price quantity of"<<i+1<<"items\n";

    cin>>code>>name>>price>>quantity;
}
void display(class item a[],int n)
{ int t=0;
    cout<<"slno.\tcode\tName\t  Price\tQuantity\tTotal";
    cout<<"\n------------------------------------------------------\n";
  for (int i = 0; i < n; i++)
  {
   
      cout<<i+1<<"\t"<<a[i].code<<"\t"<<a[i].name<<"\t"<<a[i].price<<"\t"<<a[i].quantity<<"\t";
      t=t+a[i].price*a[i].quantity;
      cout<<a[i].price*a[i].quantity<<"\n";
  }
      cout<<"\n------------------------------------------------------";

    cout<<"\nTotal=Rs."<<t<<"/-";
}

};

int main()
{ item a[10],temp;
int n;
cout<<"how may items you have";
cin>>n;
for (int i = 0; i < n; i++)
{
    a[i].input(i);
}

temp.display(a,n);

    return 0;
}