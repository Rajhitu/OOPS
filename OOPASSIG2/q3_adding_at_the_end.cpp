/*
Q3.Write a function in C++ to add new objects at the bottom of a binary file“STUD.DAT”,
 assuming the binary file is containing the objects of thefollowing class.
class STUD {
int Rno;
char Name[20];
public:void Enter()
{
cin>>Rno;
gets(Name);
}
void Display()
{
cout<<Rno<<Name<<endl;
}
};
*/
#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

class STUD
{
    int Rno;
    char Name[20];

public:
    void Enter()
    {
        cout << "enter roll no and name\n";
        cin >> Rno;
        getchar();
        gets(Name);
    }
    void Display()
    {
        cout << "\nRollno--->" << Rno << "\n name--->" << Name << endl;
    }
} s;
void copyabc()
{
    ifstream iff("stud.txt", ios::binary);
    ofstream of("newstud.txt", ios::binary);

    while (iff.read((char *)&s, sizeof(s)))
    {

        of.write((char *)&s, sizeof(s));
    }

    cout << "enter the new object at the end of file\n";

    s.Enter();
    of.write((char *)&s, sizeof(s));
    iff.close();
    of.close();
    remove("stud.txt");
    rename("newstud.txt", "stud.txt");
}

int main()
{
    int n = 1, c = 0;
    char a[10];
    ofstream f("stud.txt", ios::out | ios::binary);
    while (n)
    {
       
        for (int i = 0; i < n; i++)
        {
            s.Enter();
            f.write((char *)&s, sizeof(s));
        }
        cout << "Press 1 to enter more or 0 to exit\n";
        cin >> n;
    }
    cout << "writing in binary file finished\n";
    f.close();
    copyabc();

    cout << "data in stud.dat after adding\n";
    ifstream fi("stud.txt", ios::in | ios::binary);
    while (fi.read((char *)&s, sizeof(s)))
    {

        s.Display();
    }

    return 0;
}