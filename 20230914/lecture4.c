#include <stdio.h>

int main() {
	int a, b, c, val1, val2, val3, val4, val5;
	a = 0, b = 5, c = 8;
	val1 = a && b;
	val2 = a || c;
	val3 = (a > b) && (a < c);
	val4 = !val3;
	val5 = b && c;
	printf("a = 0, b = 5, c = 8 ÀÏ¶§\n");
	printf("val1 = %d\nval2 = %d\nval3 = %d\nval4 = %d\nval5 = %d", val1, val2, val3, val4, val5);
	return 0;
}