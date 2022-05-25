#include <stdio.h>

int main() {
	int n;
	printf("Enter array size : \n");
	do {
		printf("n = ");
		scanf("%d", &n);
	} while(n <= 0);
	int arr[n];
	printf("Enter array elements : \n");
	printf("arr[0] = ", 0);
	scanf("%d", &arr[0]);
	for(int i = 1; i < n; i++)
		do {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
		} while (arr[i] < arr[i - 1]);
	printf("Array entered : \n");
	for(int i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
}
