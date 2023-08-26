/*Q2 Create a class which stores time1 in hh:mm format. Include all the constructors.
The parameterized constructor should initialize the minute value to zero, if it
is not provided.*/
#include <iostream>
using namespace std;
class time1
{
    int hr_025;
    int min_025;

public:
    time1()
    {
        hr_025 = 0;
        min_025 = 0;
    }
    void input(int t, int j = 0) //parameterized
    {

        hr_025 = t;
        min_025 = j;
    }
    time1 operator+(time1 a)
    {
        time1 t;
        t.min_025 = a.min_025 + min_025;
        t.hr_025 = hr_025 + a.hr_025+t.min_025/60;
        if(t.min_025>59)
        t.min_025=t.min_025%60;
        return t;

    }

    void display()
    {
        cout << hr_025 << ":" << min_025;
    }
    
}a[2],t;
int main()
{
    int hr,min;
    

    cout << "enter 2 time\n";
      for (int i = 0; i < 2; i++)
    {
        cout << "enter" << i + 1 << " time in  hr min";
        cin>>hr>>min;

        a[i].input(hr,min);
    }
      
      
    t=a[1]+a[0];
    t.display();

    return 0;
}