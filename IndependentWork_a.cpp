#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int L[11];
    int positiveCount = 0;
    int negativeCount = 0;

    printf("Введіть 11 елементів масиву L:\n");
    for (int i = 0; i < 11; i++) {
        scanf_s("%d", &L[i]);
        if (L[i] > 0) {
            positiveCount++;
        }
        else if (L[i] < 0) {
            negativeCount++;
        }
    }

    int* positiveElements = (int*)malloc(positiveCount * sizeof(int));
    int* negativeElements = (int*)malloc(negativeCount * sizeof(int));
    int positiveIndex = 0;
    int negativeIndex = 0;

    for (int i = 0; i < 11; i++) {
        if (L[i] > 0) {
            positiveElements[positiveIndex] = L[i];
            positiveIndex++;
        }
        else if (L[i] < 0) {
            negativeElements[negativeIndex] = L[i];
            negativeIndex++;
        }
    }

    printf("Новий масив L після перестановки:\n");
    for (int i = 0; i < positiveCount; i++) {
        printf("%d ", positiveElements[i]);
    }
    for (int i = 0; i < negativeCount; i++) {
        printf("%d ", negativeElements[i]);
    }
    printf("\n");

    printf("Кількість додатних елементів: %d\n", positiveCount);
    printf("Кількість від'ємних елементів: %d\n", negativeCount);

    free(positiveElements);
    free(negativeElements);

    return 0;
}