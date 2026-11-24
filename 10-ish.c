#include <stdio.h>

int countAboveAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = (double)sum / size;

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > average) {
            count++;
        }
    }
    return count;
}

int main() {
    int numbers[] = {5, -3, 0, 8, -1, 0, 7, 2, -6, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Above average count: %d\n", countAboveAverage(numbers, size));
    return 0;
}