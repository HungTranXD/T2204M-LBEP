#include <stdio.h>

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);
	int x = 1, sum = 0;
	while(x < n) {
		if(n % x == 0) {
			sum = sum + x;
		}
		x++;
	}
	if(sum == n) {
		printf("n la so hoan hao");
	} else {
		printf("n khong la so hoan hao");
	}
	return 0;
}
