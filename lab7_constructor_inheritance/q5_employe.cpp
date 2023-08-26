/*Q5.Create a class which stores employee name_025,id_025 and salary Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and
basic salary. The ‘Part-Time’ class stores the number of hours and pay*/
#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    char name_025[20];
    int id_025;

public:
    employee(char *nam, int ide)
    {
       cout<<"costructor called\n";
        strcpy(name_025, nam);
        id_025 = ide;
    }
    
    void display()
    {
        cout << "\nname of employee: " << name_025;
        cout << "\nid of employee: " << id_025;
    }
};
class regular : public employee
{
    int basic_sal;
    float da, hra_025, sal;

public:
    regular(int basic_sal1, char *nam, int ide) : employee(nam, ide)
    {
        employee(nam, ide);
        basic_sal = basic_sal1;

        da = 0.8 * basic_sal;
        hra_025 = 0.1 * basic_sal;
        sal = basic_sal + da + hra_025;
        
    }
    void displayem()
    {
        display();
        cout << "the total salary of the employee is " << sal;
    }
};
class part_time : public employee
{
    int hours, pay_per_hour, sal;

public:
    part_time(int hr, int pph, char *lora, int id_025) : employee(lora, id_025)
    {
        hours = hr;
        pph = pay_per_hour;

        sal = hours * pay_per_hour;
    }
    void displaypt()
    {
        display();
        cout << "\nsalary per hours: " << sal;
    }
};
int main()
{
    int basic_sal, hours, pay_per_hour, n, id_025;
    char name_025[100];
    cout << "press1 if u have employee\n";
    cout << "press 2 if u have partime employee\n ";
    cin >> n;
    switch (n)
    {
    case 1:{
        cout << "\nfor regular employees: ";
        cout << "\nenter the name_025 and id_025 of employee respectively: ";
        cin >> name_025 >> id_025;

        cout << "\nenter the basic salary of employee: ";
        cin >> basic_sal;
        regular r(basic_sal, name_025, id_025);
        r.displayem();
        break;
    }

    case 2:{
        cout << "\nfor part-time employees: ";
        cout << "\nenter the name_025 and id_025 of employee respectively: ";
        cin >> name_025 >> id_025;

        cout << "\nenter the total no. of working hours of emmployee and pay per hour:";
        cin >> hours >> pay_per_hour;
        part_time p(hours, pay_per_hour, name_025, id_025);
        p.displaypt();
        break;
    }
    default:
        break;
    }

    return 0;
}