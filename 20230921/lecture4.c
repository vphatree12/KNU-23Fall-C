#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
	double x = 0, y = 0, �� = 0;
	int count = 0, circle = 0;
	int checkpoint = 10000000, progress = 0;
	
	srand(time(NULL));

	while (count < 1000000000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;	//���� ���� �Լ�
		
		double point = x * x + y * y;
		if (point <= 1.0) {
			circle++;
			�� = 4.0 * (double)circle / count;
		}
		double k;
		if (count % checkpoint == 0) {
			k = (double)circle / count;

			int nemo = progress / 5;

			// 5 % ���� ���� ���� ����
			for (int n = 0; n < 20; n++) {
				if (n < nemo)
					printf("��");
				else
					printf("��");
			}
			printf("\n");
			// 5% ���� ���� ���� ����
		}
	}
	return 0;
}