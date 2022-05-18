//Tim so lon nhat chia het cho 2 va 3
#include <stdio.h>

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);
	int x = 0;
	int max;
	while(x < n) {
		if(x % 2 == 0 && x % 3 == 0) {
			max = x;
		}
		x++;
	}
	printf("max = %d", max);
	return 0;
}
