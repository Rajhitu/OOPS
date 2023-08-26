/*Q6.Given a binary file GAME.DAT, containing records of the following
 structuretype:
 Struct GAME
 {char Gamename[30];
 char participant[10][30];
 };
 write a functionin C++ that would read contents from the file GAME.DAt
 andcreates a file named BASKET.DAT copying only those records
from GAME.DATwhere the game name is “Basket Ball”.*/
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

struct GAME
{
    char gamename[30];
    char participant[10][30];
} s;

void newgame(char newgame[])
{
    int c = 0;
    cout << "creating new file for the game--->" << newgame;

    ifstream fi("game.txt", ios::in | ios::binary);
    ofstream of("newgame.txt", ios::binary);
    while (fi.read((char *)&s, sizeof(s)))
    {
        if (strcmp(s.gamename, newgame) == 0)
        {
            of.write((char *)&s, sizeof(s));

            c++;
        }
    }

    if (c == 0)
    {

        cout << "no such game was found\n";
    }
    else
    {

        cout << "req game copied to new file\n";
    }
    of.close();
    fi.close();
}
int main()
{
    int n = 1, c = 0;
    ofstream f("game.txt", ios::out | ios::binary);
    while (n)
    {

        int a = 1, i = 0;
        ;
        cout << "enter the game name\n";
        cin >> s.gamename;

        cout << "enter the list of players\n";
        while (a)
        {
            cin >> s.participant[i];
            i++;
            strcpy(s.participant[i], "null");
            cout << "press 1 to enter more players else 0\n";
            cin >> a;
        }

        f.write((char *)&s, sizeof(s));

        cout << "Press 1 to enter more games or 0 to exit\n";
        cin >> n;
    }
    cout << "writing in binary file finished\n";
    f.close();

    cout << "which game u need to copy\n";
    char nwgame[100];
    cin >> nwgame;
    newgame(nwgame);

    fstream fi("newgame.txt", ios::in | ios::binary);
    while (fi.read((char *)&s, sizeof(s)))
    {

        {
            cout << s.gamename << endl
                 << "\n----------------------------";

            for (int i = 0; strcmp(s.participant[i], "null") != 0; i++)
            {
                cout << "\n"
                     << i + 1 << "------>" << s.participant[i] << endl;
            }
        }
        cout << "\n*************************************************************\n";
    }

    return 0;
}