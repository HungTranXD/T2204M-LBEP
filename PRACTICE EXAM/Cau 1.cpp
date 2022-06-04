#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Enter 3-digit integer : \n");
	do {
		printf("n = ");
		scanf("%d", &n);
	} while(abs(n) < 100 || abs(n) > 999);
	//Luu cac chu so vao 1 mang
	int arr[3];
	for(int i = 0; n != 0; n /= 10, i++) {
		arr[i] = abs(n) % 10;
	}
	//In ra chu so trong mang
	for(int i = 2; i >= 0; i--) {
		switch (arr[i]) {
			case 1 : printf("one\t"); break;
			case 2 : printf("two\t"); break;
			case 3 : printf("three\t"); break;
			case 4 : printf("four\t"); break;
			case 5 : printf("five\t"); break;
			case 6 : printf("six\t"); break;
			case 7 : printf("seven\t"); break;
			case 8 : printf("eight\t"); break;
			case 9 : printf("nine\t"); break;
			default : printf("zero\t"); break;
		}
	}
	return 0;
}

