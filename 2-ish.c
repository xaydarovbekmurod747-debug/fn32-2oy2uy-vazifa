#include <stdio.h>

int sumEven(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int numbers[] = {6, 4, 7, 13, 23, 5, 10, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int result = sumEven(numbers, size);
    printf("Sum of even numbers: %d\n", result);

    return 0;
}