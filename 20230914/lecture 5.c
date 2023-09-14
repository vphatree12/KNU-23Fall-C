#include <stdio.h>

int main() {
	int year, yoon;
	scanf_s("%d", &year);
	yoon = year % 4 == 0 && year % 100 != 0 && year % 400 == 0;
	if (yoon)
		printf("¿±≥‚¿‘¥œ¥Ÿ");
	else
		printf("¿±≥‚¿Ã æ∆¥’¥œ¥Ÿ");
	return 0;
}