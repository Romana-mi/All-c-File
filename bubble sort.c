//bubble sort into a number of list.
#include<stdio.h>
void main()

{

    FILE *ra, *wb;
    int a[100],i,j,n,temp;
    ra = fopen("F:\\c\\data structure in c\\as.txt","r");
     wb = fopen("F:\\c\\data structure in c\\out.txt","w");

    printf("enter the number of element \n");
    scanf("%d",&n);

    printf("enter the %d all element \n", n);
    for(i=0;i<n;i++)
    {
    fscanf(ra,"%d",&a[i]);
    printf("%d\n",a[i]);


}
    for (i = 0 ; i < n; i++)
  {
    for (j = 0 ; j < n-1 ; j++)
    {
      if (a[j] > a[j+1]) /* For decreasing order use < */
      {
        temp   = a[j];
        a[j]   = a[j+1];
        a[j+1] = temp;
      }
    }
  }

  printf("\nSorted list in ascending order:\n");

  for (i = 0; i < n; i++)

  {
     printf("%d\n", a[i]);
     fprintf(wb,"%d\n", a[i]);
  }
}


