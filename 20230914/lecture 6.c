#include <stdio.h>

int main() {
	int a;
	scanf_s("%d", &a);
	if (a > 0)
		printf("a�� ���� �����Դϴ�");
	else if (a == 0)
		printf("a�� 0�Դϴ�");
	else
		printf("a�� ���� �����Դϴ�");
	return 0;
}