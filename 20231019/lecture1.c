//#include <stdio.h>
//int main() {
//	int n, score = 0, ave = 0;
//	printf("�л��� �Է� : ");
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		printf("�л� # %d-%d ���� �Է� : ", n, i);
//		scanf_s("%d", &score);
//		printf("�л� # %d-%d ���� ��� : \n", n, i);
//		ave += score;
//	}
//	printf("��� ���� : %d", ave / 3);
//	return 0;
//}
#include <stdio.h>
int main() {
	int n;
	int* score;
	printf("�л� �� �Է� : ");
	scanf_s("%d", &n);
	score = malloc(n * sizeof(int));
	for (int i = 1; i <= n; i++) {
		printf("�л� # %d-%d ���� �Է� : ", n, i);
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