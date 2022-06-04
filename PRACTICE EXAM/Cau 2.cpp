#include <stdio.h>
#include <string.h>

void sortString(char s[]) {
	for(int i = 0; i < strlen(s) - 1; i++) {
		for(int j = 0; j < strlen(s) - 1 - i; j++) {
			if(s[j] > s[j+1]) {
				char temp = s[j];
				s[j] = s[j + 1];
				s[j+1] = temp;
			}
		}
	}
}
int main() {
	char s[100];
	printf("Enter string : ");
	scanf("%s", s);
	sortString(s);
	printf("String after sorting : ");
	printf("%s", s);
	return 0;
}

