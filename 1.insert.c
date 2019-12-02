//inserting
#include<stdio.h>
void main()
{
    int a[100],i,n,p,value;

    printf("Enter the number of element \n");
    scanf("%d",&n);
    printf("enter the %d all element \n", n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
        printf("enter the position \n");
        scanf("%d",&p);
        if(p<=n)
        {


        printf("enter the value \n");
        scanf("%d",&value);
        for (i = n; i >= p; i--)
        a[i] = a[i-1];
        a[p] = value;

        printf("Resultant array is\n");

        for (i = 1; i <= n; i++)
        printf("%d\n", a[i]);
}
else
{
    printf("Error");
}
}
