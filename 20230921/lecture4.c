#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
	double x = 0, y = 0, ㅠ = 0;
	int count = 0, circle = 0;
	int checkpoint = 10000000, progress = 0;
	
	srand(time(NULL));

	while (count < 1000000000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;	//난수 생성 함수
		
		double point = x * x + y * y;
		if (point <= 1.0) {
			circle++;
			ㅠ = 4.0 * (double)circle / count;
		}
		double k;
		if (count % checkpoint == 0) {
			k = (double)circle / count;

			int nemo = progress / 5;

			// 5 % 단위 진행 상태 보기
			for (int n = 0; n < 20; n++) {
				if (n < nemo)
					printf("■");
				else
					printf("□");
			}
			printf("\n");
			// 5% 단위 진행 상태 보기
		}
	}
	return 0;
}