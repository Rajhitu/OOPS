/*Q5..Write a function in C++ to search for a BookNo from a binary file“BOOK.DAT”,
 assuming the binary file is containing the objects of thefollowing class.
 class Book
 { int Bno;
 char Title[30];
 public : int RBno()


{ return Bno;}
void Enter()
{ cin>>Bno;gets(Title);}
void Display()
{ cout<<Bno<<Tilte<<endl; }
 };
*/
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class Book
{
    int Bno;
    char Title[30];

public:
    void Enter()
    {
        cout << "enter book no and title\n";
        cin >> Bno;
        cin >> Title;
    }
    void Display()
    {
        cout << "\nbook no--->" << Bno << "\ntiltle no--->" << Title << endl;
    }
    int RBno()
    {
        return Bno;
    }
} s;

void search()
{
    int c = 0, a;

    cout << "enter bookno. u want to search\n ";
    cin >> a;

    ifstream fi("book.txt", ios::in | ios::binary);
    while (fi.read((char *)&s, sizeof(s)))
    {
        if (a == s.RBno())
        {
            s.Display();
            c++;
        }
    }

    if (c == 0)
    {

        cout << "no books found\n";
    }
    else
    {

        cout << "required books displayed....................... prog over\n";
    }
}
int main()
{
    int n = 1, c = 0;
    int a;
    ofstream f("book.txt", ios::out | ios::binary);
    while (n)
    {

        s.Enter();
        f.write((char *)&s, sizeof(s));

        cout << "Press 1 to enter more or 0 to exit\n";
        cin >> n;
    }
    cout << "writing in binary file finished\n";
    f.close();

    search();
    return 0;
}