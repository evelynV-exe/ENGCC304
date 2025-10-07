#include <stdio.h>
void swapNumbers (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    int *pNum1 = &num1;
    int *pNum2 = &num2;

    printf("Enter your first number: ");
    scanf("%d", &num1);
    printf("Enter your second number: ");
    scanf("%d", &num2);

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    
    swapNumbers(pNum1, pNum2);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
