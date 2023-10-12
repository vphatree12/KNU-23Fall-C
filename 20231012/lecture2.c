#include <stdio.h>
void swap(int* pa, int* pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}
// sort함수 정의
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
int main() {
    int a1, a2, a3, a4, a5;
    printf("배열 입력 1: "); scanf_s("%d", &a1);
    printf("배열 입력 2: "); scanf_s("%d", &a2);
    printf("배열 입력 3: "); scanf_s("%d", &a3);
    printf("배열 입력 4: "); scanf_s("%d", &a4);
    printf("배열 입력 5: "); scanf_s("%d", &a5);
    int arr[] = { a1, a2, a3, a4, a5 };
    int n = sizeof(arr) / sizeof(arr[0]); // 배열 길이계산

    printf("정렬 전 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sort(arr, n);

    printf("정렬 후 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}