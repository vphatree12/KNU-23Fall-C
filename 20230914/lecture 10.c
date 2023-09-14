//구구단 2~9단 출력
//단 5단은 저멀리 보내주도록 합시다
#include <stdio.h>

int main() {
	int r;
	for (int a = 2; a < 10; a++) {
		if (a != 5) {
			printf("%d단\n", a);
			for (int k = 1; k < 10; k++) {
				r = a * k;
				printf("%d * %d = %d\n", a, k, r);
			}
		}
	}
}