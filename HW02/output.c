#include <stdio.h>

void outputT2(int i) {
    printf("%d ", i);
}

void outputT5(int* arr, unsigned int count) {
    unsigned int i;
    for (i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
}
