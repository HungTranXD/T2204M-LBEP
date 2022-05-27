#include <stdio.h>

int smallestCommonMultiple(int a, int b) {
	int min = (a > b) ? a : b;
	for(int i = min; ; i++) {
		if(i % a == 0 && i % b == 0) {
			return i;
		}
	}
}

int main() {
	int x, y;
	printf("Enter x, y : \n");
	scanf("%d%d", &x, &y);
	printf("Smallest common multiple = %d", smallestCommonMultiple(x, y));
	return 0;
}
