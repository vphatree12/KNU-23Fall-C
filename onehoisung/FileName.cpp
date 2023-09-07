#include <stdio.h>

int main() {
	int num, floor, a, b;
	scanf_s("%d", &num);
	printf("%d층 피라미드\n", num);

	for (a = 1; a <= num; a++) {
		for (floor = 1; floor <= (num - a); floor++) {
			printf(" ");
		}
		for (b = 1; b <= (a * 2) - 1; b++)
			printf("*");
		printf("\n");
	}
	return 0;
}