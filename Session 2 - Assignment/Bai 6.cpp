#include <stdio.h>

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);
	int x = 1, S = 0;
	while(x <= n) {
		S = S + x;
		x++;
	}
	printf("S = %d", S);
	return 0;
}
