#include <stdio.h>

void main() {
	int n, d;
	scanf("%d", &n);
<<<<<<< HEAD
	for(d = 0; n > 0; d++) {
=======
	for (d = 0; n > 0; d ++) {
>>>>>>> 2018.11.22
		n = n / 10;
	}
	printf("%d\n", d);
}
