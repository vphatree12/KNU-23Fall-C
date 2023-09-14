#include <stdio.h>

int main() {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < i; j++) {
			printf("   ");
		}
		if (i % 2 == 0)
			printf("| O |");
		else
			printf("| X |");
		printf("\n-----------------\n");
	 }
	return 0;
}
//int main() {
//	int a = 1;
//	while (a <= 5) {
//		
//		if (a % 2 == 1) {
//			for (int k = 1; k > a; a++)
//				printf(" ");
//			printf("| 0 |\n");
//		}
//
//		else (a % 2 == 0); {
//			
//			for (int k = 1; k > a; a++)
//				printf(" ");
//			printf("| X |\n");
//		}
//
//		a++;
//	}
//}