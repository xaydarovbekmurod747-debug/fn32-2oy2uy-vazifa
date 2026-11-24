#include <stdio.h>

int countZero(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int numbers[] = {5, -3, 0, 8, -1, 0, 7, 2, -6, 0};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Zero count: %d\n", countZero(numbers, size));
    return 0;
}