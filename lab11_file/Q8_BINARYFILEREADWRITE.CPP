/*viii. WAP to read and write objects to a file, using read and write
functions.
*/
#include <iostream>
#include <fstream>

using namespace std;

struct stud
{
    int roll, marks[3];
    char name[20], gen;

} s;

int main()
{
    int n;
    cout << "how many students u have\n";
    cin >> n;
    ofstream f("binary.txt",  ios::out | ios::binary);
    for (int i = 0; i < n; i++)
    {

        cout << "enter name roll gen and marks of" << i + 1 << "student:";
        // ts(s.name);
        cin >> s.name >> s.roll >> s.gen >> s.marks[0] >> s.marks[1] >> s.marks[2];

        f.write((char *)&s, sizeof(s));
    }
    f.close();

    cout<<"writing in binary file finished\n";
    ifstream fi("binary.txt", ios::in  | ios::binary);
    for (int i = 0; i < n; i++)
    {

        // ts(s.name);

        fi.read((char *)&s, sizeof(s));
        cout << "Nmae--->" << s.name << "\nRoll--->" << s.roll << "\ngender--->" << s.gen << "\nMarks ---->" << s.marks[0] << " " << s.marks[1] << " " << s.marks[2];
        cout << "\n........................................................\n";
    }

    return 0;
}
