#include<stdio.h>
int main()
{
    int i,j=60;
    while(j==0)
    {
        i=1;
        printf("%d\n",i);
        i=i+3;
        j=60;
        printf("%d\n",j);
        j=j-5;
    }
    return 0;
}
