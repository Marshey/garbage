#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR 30
#define DEF_NUMBER 10

int main(void) {
	char str[MAX_STR + 1];
	char *text[DEF_NUMBER];
	char **ptr;
	int k;

	ptr = text;
	int number[DEF_NUMBER + 1];
	int cnt = 0;
	while (cnt < DEF_NUMBER && strcmp(str, "END") != 0) {
		scanf("%s", str);
		number[cnt] = strlen(str);
		text[cnt] = (char *)malloc(sizeof(char) * (number[cnt] + 1));
		strcpy(text[cnt], str);
		cnt++;
	}

	int i;
	for (i = 0; i < cnt; i++) {
		if (strcmp(text[i], "END") != 0) {
			printf("%sの長さは%dです。\n", *(ptr + i), number[i]);
		}
	}

	for (k = 0; k < cnt; k++) {
		free(text[k]);
	}

}
