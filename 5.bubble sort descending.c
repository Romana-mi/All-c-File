// descending order bubble sort i a number of list.
#include<stdio.h>
int main()
{
    int a[100],i,n,j,temp;

    printf("Enter number of elements:\n");
    scanf("%d",&n);

    printf("Enter all %d element:\n", n);
    for(i=1;i<=n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(j=1;j<=n-1;j++)
    {
        for(i=1;i<=n-j;i++)
        {

        if(a[i]<a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
           a[i+1]=temp;
        }
        }
    }

    printf("\The sorted list in descending order:\n");
    for(i=1;i<=n;i++)
    printf("\%d\n",a[i]);
}




