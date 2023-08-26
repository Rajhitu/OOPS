/*Create a class which stores employee name,id and salary Derive two
classes from ‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’
class stores DA, HRA and basic salary. The ‘Part-Time’ class stores the
number of hours and pay per hour. Calculate the salary of a regular
employee and a par-time employee, using virtual function*/

#include <bits/stdc++.h>

    using namespace std;

class employee

{

protected:
    char name[20];

    int id;

    float salary;

public:
    employee(const char *n, int i)

    {

        strcpy(name, n);

        id = i;
    }

    virtual void calc()

    {
    }

    virtual void show()

    {
    }
};

class reg_employee : public employee

{

    float da, hra, basic_sal;

public:
    reg_employee(const char *n, int i, float d, float h, float b) : employee(n, i)

    {

        da = d;

        hra = h;

        basic_sal = b;
    }

    void calc()

    {

        salary = basic_sal + da + hra;
    }

    void show()

    {

        cout << "\nname of employee: " << name;

        cout << "\nid of employee: " << id;

        cout << "\ntotal salary of employee: " << salary;
    }
};

class part_employee : public employee

{

    int n_hrs, p_hrs;

public:
    part_employee(const char *n, int i, int nh, int ph) : employee(n, i)

    {

        n_hrs = nh;

        p_hrs = ph;
    }

    void calc()

    {

        salary = n_hrs * p_hrs;
    }

    void show()

    {

        cout << "\n\nname of employee: " << name;

        cout << "\nid of employee: " << id;

        cout << "\ntotal salary of employee: " << salary;
    }
};

int main()

{

    reg_employee r("RAHUL", 1001, 650, 80, 60);

    part_employee p("BABITA", 1003, 6, 150);

    employee *e[2] = {&r, &p};

    for (int i = 0; i < 2; ++i)

    {

        e[i]->calc();

        e[i]->show();
    }

    return 0;
}
