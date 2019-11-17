//linear search
#include <stdio.h>
int main()
{
	int i, a[100], n, x;

	printf("Enter number of elements in array: ");
	scanf("%d", &n);

	printf("Enter %d integer: \n", n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}

	printf("Enter a number to search: ");
	scanf("%d", &x);

	for (i = 0; i < n; ++i) {
		if (a[i] == x){
			printf("%d is present at location %d.\n", x, i+1);
			break;
		}
	}
	if (i == n) {
		printf("%d isn't present in the array.\n", x);
	}
}
