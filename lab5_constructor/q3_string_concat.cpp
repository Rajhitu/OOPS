/*Q3Create a class which stores a string1 and its length_025 as data members. Include all
the constructors. Include a member function to join two string1s and display the
concatenated string1.*/
#include <iostream>
#include <string.h>
using namespace std;
class string1
{
    char str_025[10];
    int length_025;

public:
    string1() //default
    {

        strcpy(str_025, "hitu");
        length_025 = strlen(str_025);
        
    }
    string1(char a[]) //paramet
    {

        strcpy(str_025, a);
        length_025 = strlen(str_025);
        display();
    }
    string1(const string1 &c)
    {

        strcpy(str_025, c.str_025); //cant write equal to!!!!
        length_025 = c.length_025;
        
    }
    void concatinate(string1 a, string1 b)
    {
        strcpy(str_025, strcat(a.str_025, b.str_025));
        length_025 = strlen(a.str_025) + strlen(b.str_025);
        cout << "the concated string is " << str_025;
    }
    void display()
    {

        cout<<"the string is "<<str_025<<"\n";
    }
};
int main()
{   string1 a;

    char stri[10];
    int ca;

    cout << "press 1 to use default const\n"
         << "press 2 to use paramet const \n"
         << "press 3 to use copy const\n"
         << "press 4 to concatinate string\n";;
    cin >> ca;

    switch (ca)
    {
    case 1:
    {
        a.display();
        break;
    }
    case 2:
    {
        cout << "enter a string ";
        cin >> stri;
        string1 b(stri);
        b.display();
        break;
    }
    case 3:
    {
        string1 c(a);
        break;
    }
    case  4:
    {cout << "enter a string ";
        cin >> stri;
        string1 b(stri);
        b.concatinate(b,b);

    }
    default:
        break;
    }
  
   

    return 0;
}