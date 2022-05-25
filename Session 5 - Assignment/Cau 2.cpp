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
	int offset, minOffset, minIdx;
	if(arr[0] > x) {
		minOffset = arr[0] - x;
		minIdx = 0;
	} else {
		minOffset = x - arr[0];
		minIdx = 0;
	}
	for(int i = 1; i < n; i++) {
		if(arr[i] > x) {
			offset = arr[i] - x;
		} else {
			offset = x - arr[i];
		}
		if(offset < minOffset) {
			minOffset = offset;
			minIdx = i;
		}
	}
	printf("The nearest value from x is a[%d] = %d \n", minIdx, arr[minIdx]);
	printf("and its distance from x is %d", minOffset);
	return 0;
}
