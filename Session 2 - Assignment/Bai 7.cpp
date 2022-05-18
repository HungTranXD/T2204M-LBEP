#include <stdio.h>

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);
	int x = 1;
	double S = 0;
	while(x <= n) {
		S = S + (double) 1 / x;
		x++;
	}
	printf("S = %lf", S);
	return 0;
}
