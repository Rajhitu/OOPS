/*
Q4. Given a binary file APPLY.DAT containing records of the following classApplicant type

Class Applicant
{char Rno[10];
 char name[30];
 int A_score;
 public:void enroll()
 { gets(Rno);gets(Name);cin>>A_score; }
 void Status(){ cout<<Rno<<endl<<name<<endl<<A_score; }
 int ReturnScore() { return A_Score;}
  };
  Write a function in C++ that would read contents of file APPLY.DAT and
display the details of those students whose A_score is above 70.*/
#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
class Applicant
{
    char Rno[10];
    char name[30];
    int A_score;

public:
    void enroll()
    {
        cout << "enter roll name & score of applicant \n";

        cin >> Rno;

        cin >> name;

        cin >> A_score;
    }
    void Status()
    {
        cout << "\nrno--->" << Rno
             << "\nname--->" << name
             << "\nscore--->" << A_score << endl;
    }
    int ReturnScore()
    {
        return A_score;
    }
} s;

int main()
{
    int n = 1, c = 0;
    char a[10];
    ofstream f("appli.txt", ios::out | ios::binary);
    while (n)
    {
        n = 1;
        
            s.enroll();
            f.write((char *)&s, sizeof(s));
        
        cout << "Press 1 to enter more or 0 to exit\n";
        cin >> n;
    }
    cout << "writing in binary file finished\n";
    f.close();
  cout<<"applicant having score greater than 70 are \n";
    ifstream fi("appli.txt", ios::in | ios::binary);
    while (fi.read((char *)&s, sizeof(s)))
    {
        if (s.ReturnScore() >= 70)
        {
            s.Status();
            c++;
        }
    }

    if (c == 0)
    {

        cout << "no aplicant found\n";
    }
    else
    {

        cout << "req applicant displayed....................... prog over\n";
    }

    

    return 0;
}