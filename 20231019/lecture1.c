//#include <stdio.h>
//int main() {
//	int n, score = 0, ave = 0;
//	printf("학생수 입력 : ");
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		printf("학생 # %d-%d 성적 입력 : ", n, i);
//		scanf_s("%d", &score);
//		printf("학생 # %d-%d 성적 출력 : \n", n, i);
//		ave += score;
//	}
//	printf("평균 점수 : %d", ave / 3);
//	return 0;
//}
#include <stdio.h>
int main() {
	int n;
	int* score;
	printf("학생 수 입력 : ");
	scanf_s("%d", &n);
	score = malloc(n * sizeof(int));
	for (int i = 1; i <= n; i++) {
		printf("학생 # %d-%d 성적 입력 : ", n, i);
		scanf_s("%d", score+i);
	}
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += score[i];
	}

	free(score);
	score = NULL;
	return 0;
}