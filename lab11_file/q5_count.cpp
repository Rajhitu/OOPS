/*v. WAP to count following in a given file:
a. No. of characters
b. No. of words
c. No. of lines
d. No. of uppercase letters, lowercase letters, digits and special
symbols.
*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch[100], a;
    ofstream of("count.txt");

    of << "Hello how are you   \nthis file is opened in ofstream using VS code\n 12312 my name is hitu raj";
    of.close();
    ifstream ifs;
    // char wise
    ifs.open("count.txt");
    int noc = 0;
    while (ifs.eof() != 1)
    {
        ifs.get(a);
        if(a=='\n')
        cout<<"lineover\n";
 cout<<a;
        noc++;
    }
    cout << "char--->" << noc;
    ifs.close();

    cout << "\n.........................................................\n";

    // word wise
    ifs.open("count.txt");
    int now = 0;
    while (ifs.eof() != 1)
    {
        ifs >> ch;
          
        now++;
    }
    cout << "Words--->" << now;
    cout << "\n............................................................\n";
    ifs.close();

    // line wise
    ifs.open("count.txt");
    int nol = 0;
    while (ifs.eof() != 1)
    {
        ifs.getline(ch, 100);
        nol++;
    }
    cout << "line--->" << nol;
    ifs.close();
    cout << "\n............................................................\n";


//uppper lower or digit
    ifs.open("count.txt");
    int low ,up,dig,ss;
    low=up=ss=dig=0;
    while (ifs.eof() != 1)
    {
        ifs.get(a);

       if(a>64&&a<91)
       up++;
       else if(a>=97&&a<=122)
       low++;
       else if(a>=48 &&a<=57)
       dig++;

       else
       ss++;

    }
    cout << "lower case--->" << low<<endl;
        cout << "upper case--->" << up<<endl;

    cout << "digits case--->" << dig<<endl;

    cout << "special symbol case--->" << ss<<endl;

    ifs.close();


    return 0;
}
