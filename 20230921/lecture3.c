#include <stdio.h>

int Factorial(int a) {
	if (a == 0)
		return 1;
	return a * Factorial(a - 1);
}

int main() {
	int a;
	scanf_s("%d", &a);
	printf("����� ���丮�� ���� �Է� : %d", Factorial(a));
	return 0;
}