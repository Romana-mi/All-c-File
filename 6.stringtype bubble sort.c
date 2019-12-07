// string type bubble sort.
#include<stdio.h>
void main()

{
    int i,j,n;
    char a[100][100],temp[100];

    printf("Number of element: \n");
    scanf("%d",&n);

    printf("\n enter the  list:");
    for(i=1;i<=n;i++)
    {
        printf("\n a[%d]:",i);
        scanf("%s",a[i]);
    }

    for(j=1;j<=n-1;j++)
    {
        for(i=1;i<=n-j;i++)
    {
        if(strcmp(a[i],a[i+1])>0)
        {
            strcpy(temp,a[i]);
            strcpy(a[i],a[i+1]);
            strcpy(a[i+1],temp);
        }
        }
    }
    printf("\n sorted list");
    for(i=1;i<=n;i++)
    {
        printf("\n a[%d]=%s",i,a[i]);
    }
return 0;
}

