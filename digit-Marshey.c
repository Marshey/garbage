#include <stdio.h>

void main() {
	int n, d;
	
	scanf("%d", &n);
	for (d = 0; n > 0; d ++) {
		n = n / 10;
	}
	printf("%d\n", d);
}
