#include <stdio.h>

int main() {
	int jumsoo;
	char grade;
	scanf_s("%d", &jumsoo);

	if (jumsoo > 100 || jumsoo < 0) {
		printf("잘못 입력했습니다.\n");
	return 0;
	}
	
	int jumsoo_div = jumsoo / 10;

	switch (jumsoo_div) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
	}
	
}