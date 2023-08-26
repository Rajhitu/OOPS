/*Q8. Given a binary file TELE.DAT, containing records of the following classdirector_025:
class director_025
{char Name[20];
char Address[30];
char areacode[5];
char phno[15];
public:void register();
 void show();
 int checkcode(char AC[])
  { return(strcmp(areacode,AC); }
   };
   Write a
function COPYABC() in C++ that would copy only those recordshaving areacode as “123” from
TELE.DAT to TELEBACK.DAT.*/

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class director_025
{
    char Name[20];
    char Address[30];
    char areacode[50];
    char phno[20];

public:
    void reegister()
    {

        cout << "enter name addresss areacode pone no.\n";

        cin >> Name >> Address >> areacode >> phno;
    }

    void show()
    {
        cout << "Nmae--->" << Name << "\nAdress--->" << Address << "\n areacode--->" << areacode << "\nphno ---->" << phno;
        cout << "\n........................................................\n";
    };
    int checkcode(char AC[])
    {
        return (strcmp(areacode, AC));
    }
} s;

void copyabc(char a[])
{
    ifstream iff("tele.txt", ios::binary);
    ofstream of("teleback.txt", ios::binary);

    while (iff.read((char *)&s, sizeof(s)))
    {
        if (s.checkcode(a) == 0)
        {
            of.write((char *)&s, sizeof(s));
        }
    }
    iff.close();
    of.close();
}

int main()
{
    int n = 1;

    ofstream f("tele.txt", ios::out | ios::binary);
    while (n)
    {
        s.reegister();
        f.write((char *)&s, sizeof(s));
        cout << "press 1 to continue entring and 0 to exit\n";
        cin >> n;
    }
    f.close();
    char a[10];
    strcpy(a, "123");
    copyabc(a);
    cout << "writing in binary file finished\n";

    cout << "DATA IN \"TELE.DAT\"\n";

    ifstream fi("tele.txt", ios::in | ios::binary);
    while (fi.read((char *)&s, sizeof(s)))
    {

        s.show();
    }
    cout << "\n....................................................\n";
    cout << "DATA IN \"TELEback.DAT\"\n";
    fi.close();
    ifstream foi("teleback.txt", ios::in | ios::binary);
    while (foi.read((char *)&s, sizeof(s)))
    {

        s.show();
    }
    foi.close();
    return 0;
}