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
	int x;
	printf("Enter x = ");
	scanf("%d", &x);
	int offset = 0, maxOffset = 0, maxIdx = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] > x) {
			offset = arr[i] - x;
		} else {
			offset = x - arr[i];
		}
		if(offset > maxOffset) {
			maxOffset = offset;
			maxIdx = i;
		}
	}
	printf("The furthest value from x is a[%d] = %d \n", maxIdx, arr[maxIdx]);
	printf("and its distance form x is %d", maxOffset);
	return 0;
}
