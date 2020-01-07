#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,ans=0;
    char word[100];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",word);

        if(word[i]=="++X"||word[i]=="X++")
            ans++;


        else
        {
            ans--;
        }
    }
    printf("%d\n",ans);
    return 0;
}
