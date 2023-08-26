
/*WAP that uses a date structure within a class. Enter any date and your birth date. The
program must display your exact age in years, months and days.*/
#include <iostream>
using namespace std;
class age
{
    int date_025, month_025, year_025;

public:
    void input()
    {

        cout << "date: ";
         cin >> date_025;
        cout << "\nmonth: ";
        cin >> month_025;
        cout << "\nyear: ";
        cin >> year_025;
    }
    void display()
    {

        cout << "date: ";
         cout<< date_025;
        cout << "\nmonth: ";
        cout<< month_025;
        cout << "\nyear: ";
        cout<<year_025;
    }
    void ageacalc(age dob, age cd)
    {
        year_025 = cd.year_025 - dob.year_025;
        if (cd.month_025 < dob.month_025)
        {
            year_025 = year_025 - 1;
            cd.month_025 = cd.month_025 + 12;
            month_025 = cd.month_025 - dob.month_025;
        }
        else
        {
            month_025 = cd.month_025 - dob.month_025;
        }
        if (cd.date_025 < dob.date_025)
        {
            month_025 = month_025 - 1;
            cd.date_025 = cd.date_025 + 30;
            date_025 = cd.date_025 - dob.date_025;

        }
        else
        {
            date_025 = cd.date_025 - dob.date_025;
        }
        
    }

};

int main()
{  age dob,cd,temp;
cout<<"enter your DOB\n";
dob.input();
cout<<"enter your Current\n";
cd.input();
temp.ageacalc(dob,cd);
temp.display();
    return 0;
}