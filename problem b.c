#include<stdio.h>
int main()
{
    int n,l,c,i,j,p;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&l,&c);
        for(i=1; i<=l; i++)
        {
            if(i%2==1)
                for(j=1;j<=c;j++)
            {
                if(j%2==1)
                    printf("*");
                    else
                    printf(".");
            }
            if(i%2==0)
                for(j=1;j<=c;j++)
            {
                if(j%2==1)
                    printf(".");
                    else
                    printf("*");
            }
            printf("\n");

        }
    }
}
