//write data in a file
#include<stdio.h>
void main()
{
    int num1, num2, sum;
    FILE *fptr;
    fptr = fopen("F:\\c\\data structure in c\\tanvir.txt","w");

    printf("Enter the number:\n");
    scanf("%d  %d", &num1, &num2);

    sum=num1+num2;

    printf("%d",sum);
    fprintf(fptr,"%d + %d = %d", num1, num2, sum);

    fclose(fptr);
}

