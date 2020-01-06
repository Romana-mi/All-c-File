#include<stdio.h>
int main()
{
    int n[10],i;
    scanf("%d%d",&n[0],&n[1]);
    n[2]=n[0]+n[1];
    for(i=2; i<=10; i++)
    {
        n[i]=n[i-1]+n[i-2];
        printf("%d,",n[i]);
    }
}
