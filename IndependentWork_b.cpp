#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int F[14];

    printf("¬вед≥ть 14 елемент≥в масиву F:\n");
    for (int i = 0; i < 14; i++) {
        scanf_s("%d", &F[i]);
    }

    int pivot = F[0];

    int greater[14];
    int lesser[14];
    int equal[14];
    int greaterCount = 0;
    int lesserCount = 0;
    int equalCount = 0;

    for (int i = 0; i < 14; i++) {
        if (F[i] > pivot) {
            greater[greaterCount] = F[i];
            greaterCount++;
        }
        else if (F[i] < pivot) {
            lesser[lesserCount] = F[i];
            lesserCount++;
        }
        else {
            equal[equalCount] = F[i];
            equalCount++;
        }
    }

    for (int i = 0; i < greaterCount; i++) {
        F[i] = greater[i];
    }
    for (int i = 0; i < equalCount; i++) {
        F[greaterCount + i] = equal[i];
    }
    for (int i = 0; i < lesserCount; i++) {
        F[greaterCount + equalCount + i] = lesser[i];
    }

    printf("¬х≥дний масив F:\n");
    for (int i = 0; i < 14; i++) {
        printf("%d ", F[i]);
    }
    printf("\n");

    printf("¬их≥дний масив F п≥сл€ перестановки:\n");
    for (int i = 0; i < 14; i++) {
        printf("%d ", F[i]);
    }
    printf("\n");

    return 0;
}