#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	char name[10];
	struct Student* s;

	printf("�л� �� �Է� : ");
	scanf_s("%d", &n);
	s = (struct Student*)malloc(n * sizeof(struct Student));
	for (int i = 1; i <= n; i++) {
		printf("�л� # %d-%d �й� �Է� : ", n, i);
		scanf_s("%d", &(s[i].sno));
		printf("�л�# %d-%d �̸� �Է� : ", n, i);
		scanf_s("%s", s[i].name, 10);
		printf("�л�# %d-%d ���� �Է� : ", n, i);
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