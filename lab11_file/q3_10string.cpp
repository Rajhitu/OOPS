//iii. WAP to write 10 strings into a file and display them from file. &lt;&lt; &gt;&gt;
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch[100];
    ofstream of("hitu.txt");

    of << "Hello how are you   \nthis file is opened in ofstream using VS code";
 of.close();
    ifstream ifs("hitu.txt");
    while (ifs.eof() != 1)//word wise
    {
        ifs >> ch;

        cout << ch << " ";
    }
cout<<"\n............................................................\n";


    return 0;
}
