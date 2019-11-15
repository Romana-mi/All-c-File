#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("%d",n);
    scanf("%d%d%d",&n,&a[i],&j);
    int a[n];
    printf("%d\n");
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
    for(i=0;i<n;i++)
        prinf("%d ",a[i]);
    return 0;
}
