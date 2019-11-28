
//#include <stdio.h>
//int main()
//{
//	int i, n, result;
//	scanf("%d", &n);
//
//	result = 0;
//
//	for (i = 0; i < n; i++) {
//		result = result + i;
//	}
//	printf("result = %d\n", result);
//
//}
//////////////////////////////////////

#include <stdio.h>
//int main()
//{
//	int i, j, n, count;
//
//	scanf("%d", &n);
//	count = 0;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			count =  count + 1;
//		}
//
//	}
//	printf("n = %d count = %d\n", n, count);
//}
/////////////////////////////////////////////

#include <stdio.h>
int main()
{
	int i, j, k, n, count;
	scanf("%d", &n);

	count = 0;

	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			for (k = 0; k < n; ++k) {
				count = count + 1;
			}
		}
	}

	printf("%d %d", n, count);
}
