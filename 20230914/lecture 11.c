#include <stdio.h>

int main() {
	int a = 1;
	while (a <= 10) {
		printf("%d´Ü\n",a);
		for (int k = 1; k < 10; k++) {
			int r = k * a;
			printf("%d * %d = %d\n", a, k, r);
		}
		a++;
	}
}