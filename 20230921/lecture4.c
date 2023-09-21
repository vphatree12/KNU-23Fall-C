#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
	double x = 0, y = 0, �� = 0;
	int count = 0, circle = 0;
	int progress = 0, checkpoint = 10000000;
	long long all = 1000000000;
	srand(time(NULL));

	while (count < all) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;	//���� ���� �Լ�
		
		double point = x * x + y * y;
		if (point <= 1.0) {
			circle++;
		}
		if (count % checkpoint == 0) {
			// ���� ������ ǥ��
			�� = 4.0 * (double)circle / count;
			progress = (int)((double)count / all);
			printf("%d%����.. ������ : %lf ", progress, ��);

			// 5% ���� ���� ���� ����
			int nemo = progress / 5;
			for (int n = 0; n < 20; n++) {
				if (n < nemo)
					printf("��");
				else
					printf("��");
			}
			printf("\n");
		}
	}
	return 0;
}