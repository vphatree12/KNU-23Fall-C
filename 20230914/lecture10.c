//������ 2~9�� ���
//�� 5���� ���ָ� �����ֵ��� �սô�
#include <stdio.h>

int main() {
	int r;
	for (int a = 2; a < 10; a++) {
		if (a != 5) {
			printf("%d��\n", a);
			for (int k = 1; k < 10; k++) {
				r = a * k;
				printf("%d * %d = %d\n", a, k, r);
			}
		}
	}
}