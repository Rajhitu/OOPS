#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

} * temp, *first, *last;

void create(int n)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    first = last = newnode;
    newnode->next = NULL;
    for (int i = 1; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));

        scanf("%d", &temp->data);
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(struct node *j)
{
    while (j != NULL)
    {

        printf("%d-->", j->data);
        j = j->next;
    }
    printf("\n");
}

void repeat(struct node *j, int n)
{
    struct node *s = j;
    while (j->next != NULL)
    {
        int x = j->data;
        while (s != NULL)
        {
            if (s->next->data == x)
            {
                struct node *temp = s->next;
                s->next = s->next->next;
                free(temp);
            }
            s = s->next;
        }
        j = j->next;
        s=j;
    }
}
int main()
{

    int n;
    printf("how many no.j u have");
    scanf("%d", &n);
    create(n);
    display(first);
    repeat(first, n);
    display(first);
    return 0;
}