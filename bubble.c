#include <stdio.h>

int main() {
	int a[] = {4, 2, 9, 7, 0, 5, 1, 6, 8, 3};
	int i, j, wk;

	for (i = 0; i < 10; i ++) {
		for (j = 0; j < 10 ; j ++) {
			if (a[i] < a[j]) {
				wk = a[i];
				a[i] = a[j];
				a[j] = wk;
			}
		}
	}

	for (i = 0; i < 10; i ++) {
		printf("%d", a[i]);
	}
	printf("\n");

	return 0;
}
