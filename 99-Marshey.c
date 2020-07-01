#include <stdio.h>

#define MAX_Multiplicand 9	//よこ
#define MAX_Mulitiplier 9	//たて


int main() {
	int i, j;
	//1列目を表示
	printf("   |");
	for (j = 1; j <= MAX_Multiplicand; j ++) {
		printf("%3d", j);
	}
	printf("\n---+");
	for (j = 1; j <= MAX_Multiplicand; j ++) {
		printf("---");
	}
	printf("\n");

	for (i = 1; i <= MAX_Mulitiplier; i ++) {
		printf("%3d|", i);
		for (j = 1; j <= MAX_Multiplicand; j ++) {
			printf("%3d", i * j);
		}
		printf("\n");
	}
	return 0;
}
