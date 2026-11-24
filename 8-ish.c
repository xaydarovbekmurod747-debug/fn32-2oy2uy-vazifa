#include <stdio.h>

void multiplyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {5, -3, 0, 8, -1, 0, 7, 2, -6, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    multiplyArray(numbers, size);
    return 0;
}