// Q4.WAP to find square and cube of a number using inline function.
//Inline int sq(int I) { return I*I;}

#include <iostream>
using namespace std;

inline void sqr(int t_025)
{

    cout << "sqr of the required no. is " << t_025 * t_025;
}
inline void cube(int t_025)
{

    cout << "cube of the required no. is " << t_025 * t_025 * t_025;
}
int main()
{
    int t_025;
    cout << "presss 1 to caluate sqr\n"
         << "press 2 to calculate cube\n";
    cin >> t_025;
    switch (t_025)
    {
    case 1:

    {
        int n025;
        cout << "enter the no.";
        cin >> n025;
        sqr(n025);
        break;
    }
    case 2:
    {
        int n025;
        cout << "enter the no.";
        cin >> n025;
        cube(n025);
        break;
    }
    default:
        break;
    }

    return 0;
}