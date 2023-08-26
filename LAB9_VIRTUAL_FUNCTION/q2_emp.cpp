/*Q5.Create a class which stores employee name,id and salary Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and
basic salary. The ‘Part-Time’ class stores the number of hours and pay*/
#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    char name_025[20];
    int id_025;

protected:
    float sal_025;

public:
   virtual void input(char *nam, int ide)
    {
        
        strcpy(name_025, nam);
        id_025 = ide;
    }
  virtual  void display()
    {
        cout << "\nname of employee: " << name_025;
        cout << "\nid of employee: " << id_025;
    }
};
class regular : public employee
{
    int basic_sal_025;
    float da, hra, sal_025;

public:
    void tot_sal(int basic_sal1)
    {
        basic_sal_025 = basic_sal1;

        da = 0.8 * basic_sal_025;
        hra = 0.1 * basic_sal_025;
        sal_025 = basic_sal_025 + da + hra;
    }
    void display()
    {
         display();
        cout << "the total salary of the employee is " << sal_025;
    }
};
class part_time : public employee
{
    int hours_025, pay_per_hour_025, sal_025;

public:
    void tot_sal(int hr, int pph)
    {
        hours_025 = hr;
        pph = pay_per_hour_025;

        sal_025 = hours_025 * pay_per_hour_025;
    }
    void display()
    {    display();
        cout << "\nsalary per hours_025: " << sal_025;
    }
};
int main()
{
    int basic_sal_025, hours_025, pay_per_hour_025, n,id_025;
    char name_025[100];
    cout << "press1 if u have employee\n";
    cout << "press 2 if u have partime employee\n ";
    cin >> n;
    switch (n)
    {
    case 1:regular r;
        cout << "\nfor regular employees: ";
         cout << "\nenter the name_025 and id_025 of employee respectively: ";
       cin>>name_025>>id_025;
        r.input(name_025,id_025);
        cout << "\nenter the basic salary of employee: ";
        cin >> basic_sal_025;
        r.tot_sal(basic_sal_025);
        r.displayem();
        break;

    case 2:
        cout << "\nfor part-time employees: ";
        cout << "\nenter the name_025 and id_025 of employee respectively: ";
       cin>>name_025>>id_025;
        part_time p;
        p.input(name_025,id_025);
        cout << "\nenter the total no. of working hours_025 of emmployee and pay per hour:";
        cin >> hours_025 >> pay_per_hour_025;
        p.tot_sal(hours_025, pay_per_hour_025);
        p.displaypt();
        break;
    default:
        break;
    }

    return 0;
}