#include <stdio.h>



int sumOdd(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int numbers[] = {5, -3, 0, 8, -1, 0, 7, 2, -6, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Sum of odd numbers: %d\n", sumOdd(numbers, size));
    return 0;
}