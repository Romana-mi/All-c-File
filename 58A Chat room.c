#include<stdio.h>
#include<string.h>
int main()
{
    char word[100],fixed[]="hello";

    int i,x=0,count=0;
    scanf("%s",word);
    for(i=0; word[i]!='\0'; i++)
    {
        if(fixed[x]==word[i])
        {
            count++;
            x++;
        }
    }
    if(x==5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
