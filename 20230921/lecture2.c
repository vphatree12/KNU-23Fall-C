#include <stdio.h>

void calculator(int selector, int num1, int num2) {
	if (selector < 1 || selector > 4) {
		printf(" ERROR !!");
		return;
	}
	printf("ù��° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num1);

	printf("�ι�° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("lf", &num2);

	if (selector == 1)
		sum(num1, num2);
	else if (selector == 2)
		sub(num1, num2);
	else if (selector == 3)
		mul(num1, num2);
	else if (selector == 4)
		div(num1, num2);
}

void sum(double a, double b) {
	double result = a + b;
	printf("%lf + %lf :%lf", a, b, result);
}
void sub(double a, double b) {
	double result = a - b;
	printf("%lf - %lf :%lf", a, b, result);
}
void mul(double a, double b) {
	double result = a * b;
	printf("%lf * %lf :%lf", a, b, result);
}
void div(double a, double b) {
	double result = a / b;
	printf("%lf / %lf :%lf", a, b, result);
}
int main() {
	int selector, num1, num2;

	printf("1.���ϱ� 2.���� 3.���ϱ� 4. ������ : ");
	scanf_s("%d", &selector);

	calculator(selector, num1, num2);
	return 0;
}