///*viii. WAP to read and write objects to a file, using read and write
//functions.

#include <iostream>
#include <fstream>
#include<string.h>

using namespace std;

struct stud
{
    char moviename[20]; 
    char song[20], singername[20];

} s;

int main()
{
    int n,c=0;
    char song[20];
    cout << "how many singers  u have\n";
    cin >> n;
    ofstream f("myfavourite.txt",  ios::out | ios::binary);
    for (int i = 0; i < n; i++)
    {

        cout << "enter song moviename singername of " << i + 1 << "singer:";
        // ts(s.song);
        cin >> s.song >> s.moviename>> s.singername;
        f.write((char *)&s, sizeof(s));
    }
    f.close();
    cout << "enter the song  u want to edit .";
    cin >> song;
    fstream is("myfavourite.txt", ios::binary | ios::in | ios::out);
    ofstream ofss("newfavourite.txt", ios::binary);
    while (is.read((char *)&s, sizeof(s)))

    {
        
        if (strcmp(s.song, song) == 0)
        {
            
           
           
        }

        else
        {
             ofss.write((char *)&s, sizeof(s));
        }
      
    }
    is.close();
    ofss.close();

    ifstream ofs("newfavourite.txt", ios::binary);
    while (ofs.read((char *)&s, sizeof(s)))

    {

        cout << "song---->" << s.song << "\n";
        cout << "singer naem----> " << s.singername << "\n";
        cout << "movienaem--->" << s.moviename << "\n";
        cout << "\n............................................................\n";
        c++;
    }
    cout << "total no. of songs is " << c;
    ofs.close();

    return 0;
}
