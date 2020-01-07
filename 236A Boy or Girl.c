#include<stdio.h>
#include<string.h>
int main()
{
    int length,i,j,count=0,result=0;
    char word[1000];
    scanf("%s",word);
    length=strlen(word);
    for(i=0; i<length; i++)
    {
        for(j=i+1; j<length; j++)
        {
            if(word[i]==word[j])
            {
                count++;
            }
        }
    }
    result=(length-count);
    if(result%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}

