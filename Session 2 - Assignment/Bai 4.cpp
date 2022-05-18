#include <stdio.h>

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);
	int daoNguoc = 0;
	int chuSo;
	while(n > 0) {
		chuSo = n % 10;
		daoNguoc = daoNguoc * 10 + chuSo;
		n /= 10;
	}
	printf("Dao nguoc cua n la : %d", daoNguoc);
	return 0;
}
