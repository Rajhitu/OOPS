/*Q5  WAP to demonstrate the order of call of constructors and destructors for a
class.*/
#include <iostream>
using namespace std;
class test
{
    static int count_025;

public:
    test()
    {
        cout << "constructor for obj" << count_025 << "is called\n";
        count_025++;
    }
    ~test()
    {

        cout << "destructor for obj" << --count_025 << "is called\n";
        
    }
};
int test::count_025=1;
int main()
{
    test a,b,c,d,e;


    return 0;
}