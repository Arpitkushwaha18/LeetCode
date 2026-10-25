
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int *arr = malloc((digitsSize + 1) * sizeof(int));

    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            for (int j = 0; j < digitsSize; j++) {
                arr[j] = digits[j];
            }

            arr[i]++;

            for (int j = i + 1; j < digitsSize; j++) {
                arr[j] = 0;
            }

            *returnSize = digitsSize;
            return arr;
        }
    }

    arr[0] = 1;

    for (int i = 1; i <= digitsSize; i++) {
        arr[i] = 0;
    }

    *returnSize = digitsSize + 1;
    return arr;
}
