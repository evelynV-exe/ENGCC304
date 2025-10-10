#include <stdio.h>

int main() {
    int data[] = {15, 7, 25, 3, 73, 32, 45};
    int n = sizeof(data) / sizeof(data[0]);
    int i, j, temp;

    printf("Old series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    printf("\nNew series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++) {
        if (data[i] == 32) {
            printf("32 is at %d\n", i);
            break;
        }
    }

    return 0;
}
