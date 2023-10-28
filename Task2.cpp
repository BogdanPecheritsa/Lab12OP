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
    int* B = NULL;
    int sizeB = 0;

    printf("Введіть %d елементів масиву A:\n", N);
    for (int i = 0; i < N; i++) {
        scanf_s("%d", &A[i]);

        if (A[i] % 2 == 0) {
            sizeB++;
            B = (int*)realloc(B, sizeB * sizeof(int));
            B[sizeB - 1] = A[i];
        }
    }

    printf("Розмір масиву B: %d\n", sizeB);
    printf("Масив B: ");
    for (int i = 0; i < sizeB; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    free(A);
    free(B);

    return 0;
}