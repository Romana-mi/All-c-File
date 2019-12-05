//binary search in c.
#include<stdio.h>
void main()
{
    int a[100],i,n,beg,end,mid,search;
    printf("enter the number of element \n");
    scanf("%d",&n);
    printf("enter the %d all element \n",n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
        printf("enter the search value \n");
        scanf("%d",&search);
        beg=1;end=n;mid=(beg+end)/2;
        while(beg<=end)
        {
            if(search<a[mid])
                end=mid-1;
            else if(search==a[mid])
            {
                printf("find the location %d",mid);
            break;
            }
            else
            beg=mid+1;
            mid=(beg+end)/2;
}
if(beg>end)
    printf("null");

}
