#include <stdio.h>

int main() {
	int year, yoon;
	scanf_s("%d", &year);
	yoon = year % 4 == 0 && year % 100 != 0 && year % 400 == 0;
	if (yoon)
		printf("�����Դϴ�");
	else
		printf("������ �ƴմϴ�");
	return 0;
}