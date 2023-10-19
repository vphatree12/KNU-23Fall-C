#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	char name[10];
	struct Student* s;

	printf("학생 수 입력 : ");
	scanf_s("%d", &n);
	s = (struct Student*)malloc(n * sizeof(struct Student));
	for (int i = 1; i <= n; i++) {
		printf("학생 # %d-%d 학번 입력 : ", n, i);
		scanf_s("%d", &(s[i].sno));
		printf("학생# %d-%d 이름 입력 : ", n, i);
		scanf_s("%s", s[i].name, 10);
		printf("학생# %d-%d 성적 입력 : ", n, i);
		scanf_s("%d", &(s[i].score));
	}
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += s[i].score;
	}
	printf("%d\n", sum);
	free(score);
	score = NULL;
	return 0;
}