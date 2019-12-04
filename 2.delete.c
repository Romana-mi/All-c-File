//delete number from a list.
#include<stdio.h>
void main()
{
    int a[100],i,n,d,value;

    printf("enter the number of element \n");
    scanf("%d",&n);

    printf("enter the %d all element \n", n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);

        printf("enter the delete position \n");
        scanf("%d",&d);

        if(d>n)
        printf("deleting not possible");
        else
        {

        for (i = d; i <= n; i++)
        a[i] = a[i+1];
        printf("Resultant array is\n");
        for (i = 1; i < n; i++)
        printf("%d\n", a[i]);
        }
}


