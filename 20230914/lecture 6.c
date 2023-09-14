#include <stdio.h>

int main() {
	int a;
	scanf_s("%d", &a);
	if (a > 0)
		printf("a는 양의 정수입니다");
	else if (a == 0)
		printf("a는 0입니다");
	else
		printf("a는 음의 정수입니다");
	return 0;
}