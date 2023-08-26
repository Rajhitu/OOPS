#include <stdio.h>

/*WAP to enter id, name, age and basic salary of n number of employees.
Calculate the gross salary of all the employees and display it along with all
other details .
[ Gross salary= Basic salary + DA + HRA,
DA = 80% of Basic salary
HRA=10% of Basic salary ]*/

struct employee
{
    char name[100];
    int age, id;
    float basicsalary;
    float grosssalary;
};

int main()
{
    int n;

    struct employee e[10];
    printf("how many employees you have ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter the name of %d employee ", i+1);
        scanf(" %[^\n]s",e[i].name);
        printf("enter the age ,id and basic salary of employee ");
        scanf(" %d %d %f",&e[i].age,&e[i].id,&e[i].basicsalary);
        

        e[i].grosssalary = e[i].basicsalary + 0.8 * e[i].basicsalary + 0.1 * e[i].basicsalary;
    }

    for (int i = 0; i < n; i++) 
    {
        printf("The name of %d employee is %s \n", i+1, e[i].name);

        printf("The age :%d \nid :%d \nBasic salary :%0.2f\ngross salary :%.2f  \n\n   ", e[i].age, e[i].id, e[i].basicsalary,e[i].grosssalary);
        

        
    }

    return 0;
}
