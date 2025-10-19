#include<stdio.h>

int main(int argc, char** argv) {
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);

	int x = a;
	int y = b;
	while (y != 0) {
		int nod = y;
		y = x % y;
		x = nod;
	}
	int nok = a / x * b;
	printf("%d", nok);
	return 0;
}