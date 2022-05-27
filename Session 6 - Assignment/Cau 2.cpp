#include <stdio.h>

int greatestCommonDivision(int a, int b) {
	int max = 1;
	for(int i = 1; i <= a && i <= b; i++) {
		if(a % i == 0 && b % i == 0) {
			max = i;
		}
	}
	return max; 
}

int main() {
	int x, y;
	printf("Enter x, y : \n");
	scanf("%d%d", &x, &y);
	printf("Greatest common divison = %d", greatestCommonDivision(x, y));
	return 0;
}
