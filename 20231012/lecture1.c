#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 333;
    int y = 142;

    printf("변수 x의 값 (swap() 호출 전): %d\n", x);
    printf("변수 y의 값 (swap() 호출 전): %d\n", y);

    swap(&x, &y);

    printf("변수 x의 값 (swap() 호출 후): %d\n", x);
    printf("변수 y의 값 (swap() 호출 후): %d\n", y);

    return 0;
}