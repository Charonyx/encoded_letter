#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char text[101];
	int i = 0;
	scanf("%[^\n]", text);
	while (text[i] != '\0') {
		if ((text[i] >= 65 && text[i] <= 86) || (text[i] >= 97 && text[i] <= 118)) {
			text[i] += 4;
		}
		else if (text[i] >= 119 && text[i] <= 122) {
			text[i] -= 22;
		}
		else if (text[i] >= 87 && text[i] <= 90) {
			text[i] -= 22;
		}
		i++;
	}
	printf("%s", text);

	return 0;
}