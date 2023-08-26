/* Q6. Create a class which storesid_025, name, age_025 and basic salary of an employee.
Input data for n number of employees. Calculate the gross salary of all the
employees and display it along with all other details in a tabular form.
[Gross salary= Basic salary + DA + HRA,
DA = 80% of Basic salary
HRA=10% of Basic salary ]*/
#include <cstdio>
#include <iostream>
using namespace std;

class employee
{
    char name[100];
    int age_025,id_025;
    float bacicsalary_025;
    float grosssalary_025;

public:
    void input()
    {
        cout << "enter the name of employee ";
        cin >> name;
        cout << "enter the age_025 ,id and basic salary of employee ";
        cin >> age_025 >>id_025 >> bacicsalary_025;

        grosssalary_025 = bacicsalary_025 + 0.8 * bacicsalary_025 + 0.1 * bacicsalary_025;
    }
    void display()
    {
        cout << " The age_025 :" << age_025 << "id is :" <<id_025 << "\nBasic salary is " << bacicsalary_025 << "\ngross salary :" << grosssalary_025;
    }
};

int main()
{
    int n;

    employee e[10];
    printf("how many employees you have ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        e[i].input();
    }

    for (int i = 0; i < n; i++)
    {
        cout << " \n \nThe details of " << i + 1 << " employee is : \n";
        e[i].display();
    }

    return 0;
}
