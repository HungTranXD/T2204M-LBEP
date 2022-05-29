
#include <stdio.h>
#include <math.h>

//Ham nhap mang
void enterArray(int n, int arr[]) {
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("\n");
}

//Ham tim max
int maxArray(int n, int arr[]) {
	int max = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

//Ham tim min
int minArray(int n, int arr[]) {
	int min = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

//2. Ham tim so nguyen to nho nhat lon hon moi gia tri trong mang
int minPrimeNum(int n, int arr[]) {
	int max = maxArray(n, arr);
	if(max <= 0) {
		return 1;
	} else {
		for(int i = max + 1; ;i++) {
			int count = 0;
			for(int j = 1; j <= i; j++) {
				if(i % j == 0) {
					count++;
				}
			}
			if(count == 2) {
				return i;
			}
		}
	}
}

//3. Ham tim uoc chung lon nhat cua tat ca cac phan tu trong mang
int maxComDiv(int n, int arr[]) {
	int min = abs(arr[0]);
	for(int i = 1; i < n; i++) {
		if(abs(arr[i]) < min) {
			min = abs(arr[i]);
		}
	}
	for(int i = min; i >= 1; i--) {
		int count = 0;
		for(int j = 0; j < n; j++) {
			if(arr[j] % i == 0) {
				count++;
			}
		}
		if(count == n) {
			return i;
		}
	}
}

//4. Ham tim boi chung nho nhat cua tat ca cac phan tu trong mang
int minComMult(int n, int arr[]) {
	int max = abs(arr[0]);
	for(int i = 1; i < n; i++) {
		if(abs(arr[i]) > max) {
			max = abs(arr[i]);
		}
	} 
	for(int i = max; ;i++) {
		int count = 0;
		for(int j = 0; j < n; j++) {
			if(i % arr[j] == 0) {
				count++;
			}
		}
		if(count == n) {
			return i;
		}
		
	}
}

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);
	int arr[n];
	enterArray(n, arr);
	printf("Min prime number = %d\n", minPrimeNum(n, arr));
	printf("Max common division = %d\n", maxComDiv(n, arr));
	printf("Min common multiple = %d\n", minComMult(n, arr));
	return 0;
}
