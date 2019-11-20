  //selection sort
#include <stdio.h>
int main()
{
	int arr[100], n, i, j, temp, min_idx;

	//get input
	printf("enter no of element in array: ");
	scanf("%d", &n);

	printf("enter %d integer element: \n", n);
	for (i = 0; i < n; ++i) {
		printf("%d. ", i + 1);
		scanf("%d", &arr[i]);
	}

	//selection sorting start
	for (j = 0; j < n - 1; ++j) {
		min_idx = j;
		for (i = j + 1; i < n; ++i) {
			if (arr[min_idx] > arr[i]) {
				min_idx = i;
			}
		}

		temp = arr[min_idx];
		arr[min_idx] = arr[j];
		arr[j] = temp;
	}

	//print sorted array
	printf("after sorting: \n");
	for (i = 0; i < n; ++i) {
		printf("%d. ", i + 1);
		printf("%d\n", arr[i]);
	}
}


