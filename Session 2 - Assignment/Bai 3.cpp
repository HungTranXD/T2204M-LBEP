#include <stdio.h>

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);
	int x = 1;
	int uoc;
	while(x < n) {
		if(n % x == 0) {
			uoc = x;
		}
		x++;
	}
	if(uoc == 1) {
		printf("n la so nguyen to");
	} else {
		printf("n khong la so nguyen to");
	}
	return 0;
}
