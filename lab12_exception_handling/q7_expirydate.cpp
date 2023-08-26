//7) WAP to check the expiry date of a medicine. If the expiry date&lt;current date, then
//throw an exception.
#include <iostream>
#include <math.h>
using namespace std;
struct datee
{
    int month_025,day_025,year_025;

}e,c;

int main()
{
    int num;
    cout << "enter the expiry date and current date in dd/mm/yy format\n";
    cin>>e.day_025>>e.month_025>>e.year_025;
    cin>>c.day_025>>c.month_025>>c.year_025;

    
    try
    {
        if (c.year_025>e.year_025)
        {
          throw 0;
            
        }
        else if(c.year_025==e.year_025&&c.month_025>e.month_025)
            
            {
                throw 0;
            }
            else if(c.year_025==e.year_025&&c.month_025==e.month_025&&c.day_025>e.day_025)
            {
                throw 0;
            }
            else
            {
                 cout << "your medicine is not expired yet \n";
            }
    }
    catch (int)
    {
        cout << "the medicine is expired\n";

    }

    
   

    return 0;
}