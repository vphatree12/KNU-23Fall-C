#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
	double x = 0, y = 0, ㅠ = 0;
	int count = 0, circle = 0;
	int progress = 0, checkpoint = 10000000;
	long long all = 1000000000;
	srand(time(NULL));

	while (count < all) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;	//난수 생성 함수
		
		double point = x * x + y * y;
		if (point <= 1.0) {
			circle++;
		}
		if (count % checkpoint == 0) {
			// 진행 원주율 표시
			ㅠ = 4.0 * (double)circle / count;
			progress = (int)((double)count / all);
			printf("%d%진행.. 원주율 : %lf ", progress, ㅠ);

			// 5% 단위 진행 상태 보기
			int nemo = progress / 5;
			for (int n = 0; n < 20; n++) {
				if (n < nemo)
					printf("■");
				else
					printf("□");
			}
			printf("\n");
		}
	}
	return 0;
}