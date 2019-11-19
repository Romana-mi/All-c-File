//binary search
#include <stdio.h>
int main()
{
	int i, j, n, temp, search, left, right, mid, arr[100];
	//get input
	printf("enter no of element in array: ");
	scanf("%d", &n);

	printf("enter %d integer element: \n", n);
	for (i = 0; i < n; ++i) {
		printf("%d. ", i + 1);
		scanf("%d", &arr[i]);
	}
	//sort array
	for (j = 0; j < n; ++j) {
		for (i = 0; i < n - 1; ++i) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	//print sorted array
	printf("after sorting: \n");
	for (i = 0; i < n; ++i) {
		printf("%d. ", i + 1);
		printf("%d\n", arr[i]);
	}
	//binary search
	printf("enter element to search: ");
	scanf("%d", &search);

	left = 0;
	right = n - 1;

	while (left <= right) {
		mid = (left + right) / 2;

		if (arr[mid] == search) {
			printf("you searching for %d is in %d no position.", search, mid + 1);
			break;
		}else if (arr[mid] < search) {
			left = mid + 1;
		}else{
			right = mid - 1;
		}
	}
	if (left > right) {
		printf("you searching for %d not found!", search);
	}

	return 0;
}
