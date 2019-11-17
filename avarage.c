#include<stdio.h>
int main()
{
    int x,y;
    float avg;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    avg=(float)(x+y)/2.0;
    printf("%f",avg);
    return 0;

}
