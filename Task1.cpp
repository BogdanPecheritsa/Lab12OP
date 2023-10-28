#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int N;
    printf("������ ����� ������: ");
    scanf_s("%d", &N);

    if (N <= 0) {
        printf("����� ������ ������� ���� ����� 0.\n");
        return 1;
    }

    int* array = (int*)malloc(N * sizeof(int));

    printf("������ %d �������� ������:\n", N);
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
        printf("��������� ������ �� ��������.\n");
    }
    else {
        printf("������������ ��������� �����: %d\n", maxLocalMin);
    }

    free(array);

    return 0;
}