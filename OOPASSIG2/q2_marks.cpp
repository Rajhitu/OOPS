/*
Q2.Consider the following class declaration:
class STUDENT{
int addno;
 char name[90];
float totalmarks;
public :void getinfo() {cin>>addno>>name>>totalmarks ;}
void showinfo () { cout<< addno<<name<<totalmarks;}
float rettotmarks () { return totalmarks;}
 };
Give function definition to do the following :
(i)write the objects of STUDENT to a binary file.
(ii) Read the objects of STUDENT from a binary file and display all the objects on the screen
     where total marks is between 456 and 498 .
*/
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
class STUDENT_025
{
    int addno;
    char name[90];
    float totalmarks;

public:
    void getinfo()
    {
        cout << "enter addressno. name and total marks\n";
        cin >> addno >> name >> totalmarks;
    }
    void showinfo()
    {
        cout << "\naddress--->" << addno << "\nName--->" << name << "\ntotalmarks--->" << totalmarks << "\n\n\n";
    }
    float rettotmarks()
    {
        return totalmarks;
    }
} s;

int main()
{
    int n = 1, c = 0;
    char a[10];
    ofstream f("studmarks.txt", ios::out | ios::binary);
    if(!f)
    {
        cout<<"file not created\n";
    }
    else
    {
        cout<<"file created\n";
    }
    while (n)
    {
        n = 1;
        for (int i = 0; i < n; i++)
        {
            s.getinfo();
            f.write((char *)&s, sizeof(s));
        }
        cout << "Press 1 to enter more or 0 to exit\n";
        cin >> n;
    }
    cout << "writing in binary file finished\n";
    f.close();

    cout << "students whose marks are b/w 456 and 498 are\n ";

    ifstream fi("studmarks.txt", ios::in | ios::binary);
    while (fi.read((char *)&s, sizeof(s)))
    {
        if (s.rettotmarks() >= 456.00 && s.rettotmarks() <= 498)
        {
            s.showinfo();
            c++;
        }
    }

    if (c == 0)
    {

        cout << "no STUDENT_025 found\n";
    }
    else
    {

        cout << "req students displayed....................... prog over\n";
    }

    return 0;
}