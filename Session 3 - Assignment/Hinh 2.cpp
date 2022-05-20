#include <stdio.h>

int main ()
{
	int i = 1;
	while(i <= 5) {
		int j = 1;
		if(i % 2 != 0) {
			while(j <= 5) {
				printf("*");
				j++;
			}
			printf("\n");
			i++;
		} else {
			while(j <= 4) {
				printf("*");
				j++;
			}
			printf("\n");
			i++;
		}
	}
	return 0;
}

