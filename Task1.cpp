#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int N;
    printf("Введіть розмір масиву: ");
    scanf_s("%d", &N);

    if (N <= 0) {
        printf("Розмір масиву повинен бути більше 0.\n");
        return 1;
    }

    int* array = (int*)malloc(N * sizeof(int));

    printf("Введіть %d елементів масиву:\n", N);
    for (int i = 0; i < N; i++) {
        scanf_s("%d", &array[i]);
    }

    int maxLocalMin = INT_MIN;

    for (int i = 1; i < N - 1; i++) {
        if (array[i] < array[i - 1] && array[i] < array[i + 1]) {
            if (array[i] > maxLocalMin) {
                maxLocalMin = array[i];
            }
        }
    }

    if (maxLocalMin == INT_MIN) {
        printf("Локальних мінімумів не знайдено.\n");
    }
    else {
        printf("Максимальний локальний мінімум: %d\n", maxLocalMin);
    }

    free(array);

    return 0;
}