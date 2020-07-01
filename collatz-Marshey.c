#include <stdio.h>

void collatz(int *n);

int main(){
	int n;
	
	scanf("%d", &n);
	while (n != 1){
		collatz(&n);
		printf("%d\n", n);
	}
	return 0;
}

void collatz(int *n) {
	if (*n % 2 == 0) {
		//偶数のとき
		*n /= 2;
	} else {
		//奇数のとき
		*n = *n * 3 + 1;
	}
	return;
}
