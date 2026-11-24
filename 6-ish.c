#include <stdio.h>

int countGreater(int arr[], int size, int x) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > x) {
            count++;
        }
    }
    return count;
}

int main() {
    int numbers[] = {-5, -3, 0, 8, -1, 0, 7, 2, -6, -4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int x = 3;
    printf("Greater than %d: %d\n", x, countGreater(numbers, size, x));
    return 0;
}