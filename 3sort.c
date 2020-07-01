#include <stdio.h>

void main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
<<<<<<< HEAD
	if(b < c) {
		if(a < b) {
			printf("%d %d %d", a, b, c);
		} else {
			if(a < c) {
=======
	if (b < c) {
		if (a < b) {
			printf("%d %d %d", a, b, c);
		} else {
			if (a < c) {
>>>>>>> 2018.11.22
				printf("%d %d %d", b, a, c);
			} else {
				printf("%d %d %d", b, c, a);
			}
		}
	} else {
<<<<<<< HEAD
		if(a < c) {
			printf("%d %d %d", a, c, b);
		} else {
			if(a < b) {
=======
		if (a < c) {
			printf("%d %d %d", a, c, b);
		} else {
			if (a < b) {
>>>>>>> 2018.11.22
				printf("%d %d %d", c, a, b);
			} else {
				printf("%d %d %d", c, b, a);
			}
		}
	}
}
