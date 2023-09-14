#include <stdio.h>

int main() {
	int jumsoo;
	char grade;
	scanf_s("%d", &jumsoo);
	if (jumsoo >= 90) {
		grade = 'A';
		printf("%c학점입니다", grade);
	}
	else if (jumsoo >= 80) {
		grade = 'B';
		printf("%c학점입니다", grade);
	}
	else if (jumsoo >= 70) {
		grade = 'C';
		printf("%c학점입니다", grade);
	}
	else if (jumsoo >= 60) {
		grade = 'D';
		printf("%c학점입니다", grade);
	}
	else {
		grade = 'F';
		printf("%c학점입니다", grade);
	}
	return 0;
}