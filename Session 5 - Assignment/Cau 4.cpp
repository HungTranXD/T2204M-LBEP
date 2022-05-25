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
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	int x = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] > x) {
			x = arr[i];
		} else if(arr[i] < -x) {
			x = - arr[i];
		}
	}
	printf("Array elements are in range [%d, %d]", -x, x);
	return 0;
}

