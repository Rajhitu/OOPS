///*viii. WAP to read and write objects to a file, using read and write
//functions.

#include <iostream>
#include <fstream>
#include <string.h>

struct guest
{
    char name[100], email[10];
    int no;
};

using namespace std;

int main()
{
    char name[100];
    int n = 1, c = 0;
    struct guest s;
    ofstream of("myguest.txt", ios::binary);
    while (n)
    {
        cout << "enter name ,phoneno,email  ";
        cin >> s.name;
        cin >> s.no;
        cin >> s.email;
        of.write((char *)&s, sizeof(s));

        cout << "press 1 is you have next guest or 0 to stop entring ";
        cin >> n;
    }
    of.close();
    cout << "enter the name u want to edit phone no.";
    cin >> name;
    fstream is("myguest.txt", ios::binary | ios::in | ios::out);
    ofstream ofss("newfile.txt", ios::binary);
    while (is.read((char *)&s, sizeof(s)))

    {
        
        if (strcmp(s.name, name) == 0)
        {
            int phno;
            cout << "enter the phone no. u want to edit for " << s.name;
            cin >> phno;

            s.no = phno;
            ofss.write((char *)&s, sizeof(s));
        }

        else
        {
             ofss.write((char *)&s, sizeof(s));
        }
      
    }
    is.close();
    ofss.close();

    ifstream ofs("newfile.txt", ios::binary);
    while (ofs.read((char *)&s, sizeof(s)))

    {

        cout << "name---->" << s.name << "\n";
        cout << "phone----> " << s.no << "\n";
        cout << "email--->" << s.email << "\n";
        cout << "\n............................................................\n";
        c++;
    }
    cout << "total no. of quest is " << c;
    ofs.close();

    return 0;
}
