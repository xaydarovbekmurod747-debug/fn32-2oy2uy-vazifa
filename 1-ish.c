#include <stdio.h>


    void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {23, 15, 34, 4, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printArray(numbers, size);

    return 0;
}