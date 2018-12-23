#include <stdio.h>
#include "quicksort.c"

int hoge(int num);
void itoa4(int num, int dig[]);
int atoi4(int dig[]);

int main(void) {
	int input;

	scanf("%d", &input);
	if (1000 > input || input > 9999 || hoge(input) == -1) {
		printf("error\n");
		exit(1);
	}
	return 0;
}

int hoge(int num) {
	int A[4], D[4];
	int Anum, Dnum;

	while (num != 6174) {
		itoa4(num, A);
		itoa4(num, D);
		if (A[0] == A[1] && A[1] == A[2] && A[2] == A[3]) {
			return -1;
		}

		quicksort(A, 0, 3);
		rquicksort(D, 0, 3);

		Anum = atoi4(A);
		Dnum = atoi4(D);
		num = Dnum - Anum;

		printf("  %4d\n- %4d\n", Dnum, Anum);
		printf("  %4d\n\n", num);
	}

	return 0;
}

void itoa4(int num, int dig[]) {
	dig[0] = num / 1000;
	dig[1] = num / 100 % 10;
	dig[2] = num / 10 % 10;
	dig[3] = num % 10;
}

int atoi4(int dig[]) {
	return dig[0] * 1000 + dig[1] * 100 + dig[2] * 10 + dig[3];
}
