#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 333;
    int y = 142;

    printf("���� x�� �� (swap() ȣ�� ��): %d\n", x);
    printf("���� y�� �� (swap() ȣ�� ��): %d\n", y);

    swap(&x, &y);

    printf("���� x�� �� (swap() ȣ�� ��): %d\n", x);
    printf("���� y�� �� (swap() ȣ�� ��): %d\n", y);

    return 0;
}