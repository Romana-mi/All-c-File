#include<stdio.h>
int sum(int a,int b,int c);
void main()
{
    int a,b,c,addition;
    scanf("%d %d %d",&a,&b,&c);//a=10;b=20;c=30;
    addition=sum(a,b,c);
    printf("%d",addition);
}
int sum(int p,int q,int r)
{
    return p+q+r;
}
