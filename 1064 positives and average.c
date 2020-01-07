#include<stdio.h>
int main()
{
    int i,count=0;
    float n[5],sum,avg;
    sum=0;
    for (i=0;i<=5;i++)
    {
        scanf("%f",&n[i]);
    }
    for(i=0;i<=5;i++)
    {
        if(n[i]>0)
        {
            sum=sum+n[i];
            count++;
        }
    }
    avg=sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);
    return 0;
}
