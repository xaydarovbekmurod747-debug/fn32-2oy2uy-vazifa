#include <stdio.h>



void printPositive(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int numbers[] = {5, -3, 0, 8, -1, 0, 7, 2, -6, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printPositive(numbers, size);
    return 0;
}