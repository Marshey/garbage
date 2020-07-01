#include <stdio.h>

int BMMatch(char Text[], int TextLen, char Pat[], int PatLen);
int Index(char alpha);

int main() {
	char Text[] = {' ', 'A', 'C', 'B', 'B', 'M', 'A', 'C', 'A', 'B', 'A', 'B', 'C'};
	int TextLen = 12;
	char Pat[] = {' ', 'A', 'C', 'A', 'B'};
	int PatLen = 4;
	int Result;
	
	Result = BMMatch(Text, TextLen, Pat, PatLen);
	printf("%d\n", Result);
	
	return 0;
}

int BMMatch(char Text[], int TextLen, char Pat[], int PatLen) {
	int Skip[27], PText, PPat, PLast, I;
	
	for (I = 1; I <= 26; I ++) {
		Skip[I] = PatLen;
	}
	for (I = 1; I <= PatLen;  I ++) {
		printf("%d\n", Index(Pat[I]));
		Skip[Index(Pat[I])] = PatLen - I;
	}
	PLast = PatLen;
	while (PLast <= TextLen) {
		printf("A\n");
		PText = PLast;
		PPat = PatLen;
		while (Text[PText] == Pat[PPat]) {
			printf("B\n");
			if (PPat == 1) {
				return PText;
			}
			PText --;
			PPat --;
		}
		PLast += Skip[Index(Text[PLast])];
	}
	return -1;
}

int Index(char alpha) {
	return alpha - 0x40;
}
