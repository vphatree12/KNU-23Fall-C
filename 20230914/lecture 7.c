#include <stdio.h>

int main() {
	int jumsoo;
	char grade;
	scanf_s("%d", &jumsoo);
	if (jumsoo >= 90) {
		grade = 'A';
		printf("%c�����Դϴ�", grade);
	}
	else if (jumsoo >= 80) {
		grade = 'B';
		printf("%c�����Դϴ�", grade);
	}
	else if (jumsoo >= 70) {
		grade = 'C';
		printf("%c�����Դϴ�", grade);
	}
	else if (jumsoo >= 60) {
		grade = 'D';
		printf("%c�����Դϴ�", grade);
	}
	else {
		grade = 'F';
		printf("%c�����Դϴ�", grade);
	}
	return 0;
}