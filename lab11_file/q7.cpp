/*Vii.Write a program that takes student data (moviename[20] number, song, gender,
marks in three subjects (phy, chem. &amp; math) from the keyboard and
store it to a file student.txt.
k=Atoi(n);*/

#include <iostream>
#include <fstream>

using namespace std;

struct stud
{
    char moviename[20]; 
    char song[20], singername[20];

} s;

int main()
{
    int n;
    cout << "how many singers  u have\n";
    cin >> n;
    ofstream f("myfavourite.txt",  ios::out | ios::binary);
    for (int i = 0; i < n; i++)
    {

        cout << "enter song moviename singername and movie name of" << i + 1 << "singer:";
        // ts(s.song);
        cin >> s.song >> s.moviename[20] >> s.singername[20]>>moviename[20];

        f.write((char *)&s, sizeof(s));
    }
    f.close();
    ifstream fi("binary.txt", ios::in  | ios::binary);
    for (int i = 0; i < n; i++)
    {

        // ts(s.song);

        fi.read((char *)&s, sizeof(s));
        cout << "Nmae--->" << s.song << "\nmoviename[20]--->" << s.moviename[20] << "\ngender--->" << s.singername[20] << "\nMarks ---->" << s.marks[0] << " " << s.marks[1] << " " << s.marks[2];
        cout << "\n........................................................\n";
    }

    return 0;
}
