/*8) WAP to take email address as input raise an exception if the email address violates
any one of the following conditions
I. It should have &#39;@&#39; symbol in the email address
Ii.The string must be terminated with .com*/
#include <iostream>
//#include<stdio.h>
using namespace std;

int main()
{
    char a_025[50];
    int i, c = 0, com = 0;
    cout << "enter your email address ";
    gets(a_025);

    for (i = 0; a_025[i] != '\0'; i++)
    {
        if (a_025[i] == '@')
        {
            c++;
        }
    }

    if (a_025[i - 1] == 'm' && a_025[i - 2] == 'o' && a_025[i - 3] == 'c' && a_025[i - 4] == '.')
    {
        com++;
    }

    try
    {
        if (c == 0)
        {
            throw 1.1;
        }
         if (com == 0)
        {
            throw 1;
        }
        if(com==1&&c==1)
        {
            cout<<"\nvalid email\n";
        }
    }

    catch (double)
    {
        cout << "\nthere is no @ in email address \n";
    }
    catch (int)
    {
        cout << "\nthere is no .com in email address \n";
    }
   

    return 0;
}
