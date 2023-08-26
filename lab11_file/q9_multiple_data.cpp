//ix. WAP to write multiple data to a file using insertion operator and read
//data from file using extraction operator.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch[100],a;
    ofstream of("hitu.txt");

    of << "Hello how are you \n";
    of<<"\nthis file is opened in ofstream using VS code";
 of.close();

 cout<<"the data enter in the file is : \n";
    ifstream ifs("hitu.txt");
    while (ifs.eof() != 1)//char wise
    {
        ifs>>ch;

        cout << ch ;
    }
cout<<"\n............................................................\n";


    return 0;
}