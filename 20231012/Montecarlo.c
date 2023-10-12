#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main() {
	double x = 0.;
	double y = 0.;

	int cnt_in_circle = 0;

	srand(time(NULL));

	for (int i = 0; i < 1000000000; i++) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		if (sqrt(x * x + y * y) < 1.0) {
			cnt_in_circle++;
		}
		double pi = 4.0 * (double)cnt_in_circle / (double)i;

		if (i % 10000000 == 0) {
			int percent = i / 10000000;
			printf("%d%% ���� ... ������ : %lf", percent, pi);
			for (int j = 0; j < percent / 20; j++) {
				printf("��");
			}
			for (int j = 0; j < 20 - percent / 20; j++) {
				printf("��");
			}
		}
	}
	return 0;
}