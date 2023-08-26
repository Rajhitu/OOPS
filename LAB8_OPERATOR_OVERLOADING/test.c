#include <stdio.h>
#include<stdlib.h>
int main()
{   int *a,max;
printf("How many no. u have\n");
scanf("%d",&max);
printf("\nenter the no.s");
    a=(int*)malloc(max*sizeof(int));

    for(int i=0;i<max;i++)
    {
        scanf("%d",&a[i]);

    }
  
    for(int i=0;i<max-1;i++)
    {
        for(int j=0;j<max-1-i;j++)
        {
            if(a[j]>a[j+1])
            {

                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
         

    }
    int n;
  printf("enter the kth no. u want to know\n");
  scanf("%d",&n);

        printf(" smallest and largest no. is %d  %d  ",a[n-1],a[max-n-1]);

    
    return 0;
}