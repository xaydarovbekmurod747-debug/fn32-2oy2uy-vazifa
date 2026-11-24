#include <stdio.h>

int countLess(int arr[], int size, int x) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < x) {
            count++;
        }
    }
    return count;
}

int main() {
    int numbers[] = {10, -3, 0, 8, -1, 0, 7, 2, -6, -4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int x = 3;
    printf("Less than %d: %d\n", x, countLess(numbers, size, x));
    return 0;
}