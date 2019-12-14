//random
#include<stdio.h>
void main()

{
    int i,a[100],n;

    printf("enter the number of element \n");
    scanf("%d",&n);
    srand(time(0));
    for(i=1;i<n;i++)
    {
        a[i]=rand()%100;
        printf("%d \n",a[i]);
    }
}

