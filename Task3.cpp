#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int N;
    printf("Введіть розмір масиву A: ");
    scanf_s("%d", &N);

    if (N <= 0) {
        printf("Розмір масиву повинен бути більше 0.\n");
        return 1;
    }

    int* A = (int*)malloc(N * sizeof(int));

    printf("Введіть %d елементів масиву A:\n", N);
    for (int i = 0; i < N; i++) {
        scanf_s("%d", &A[i]);
    }

    int temp = A[N - 1];

    for (int i = N - 1; i > 0; i--) {
        A[i] = A[i - 1];
    }

    A[0] = temp;

    printf("Масив A після циклічного зрушення вправо:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    free(A);

    return 0;
}