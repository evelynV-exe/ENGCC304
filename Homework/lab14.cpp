#include <stdio.h>
#include <limits.h>

int main() {
    int maxSize = 100;
    int arr[maxSize];
    int size = 0;

    printf("Enter values: ");

    while (scanf("%d", &arr[size]) == 1) {
        size++;
        if (getchar() == '\n') break; 
    } // end while

    printf("\nIndex: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", i);
    } // end for

    printf("\nArray: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    } // end for

    //find the max and min
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    } // end for

    printf("\n\nMin : %d\nMax : %d\n", minVal, maxVal);

    return 0;
} // end function
