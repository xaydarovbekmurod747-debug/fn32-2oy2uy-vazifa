#include <stdio.h>



int countNegative(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int numbers[] = {5, -3, 0, 8, -1, 0, 7, 2, -6, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Negative count: %d\n", countNegative(numbers, size));
    return 0;
}