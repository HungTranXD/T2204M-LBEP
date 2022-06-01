//2. Nhap vao 2 chuoi, tim chuoi nao dung truoc trong day alphabet
#include <stdio.h>
#include <string.h>

//Ham chuyen chuoi thanh in hoa
void upperCase(int n, char str[]) {
	for(int i = 0; i < strlen(str); i++) {
		if(str[i]  >= 97 && str[i] <= 122) {
			str[i] -= 32;
		}
	}
}

int main() {
	char s1[100], s2[100];
	printf("Enter string 1 : ");
	scanf("%s", s1);
	printf("Enter string 2 : ");
	scanf("%s", s2);

	upperCase(100, s1);
	upperCase(100, s2);
	
	if(strcmp(s1, s2) < 0) {
		printf("String 1 is in front of string 2 in alphabet order.");
	} else if (strcmp(s1, s2) > 0) {
		printf("String 1 is behind string 2 in alphabet order.");
	} else {
		printf("string 1 and 2 are the same.");
	}
	return 0;
}
