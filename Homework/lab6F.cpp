#include <stdio.h>

int main() {

    const char* words[] = {
        "Zero", "One", "Two", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten",
        "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen"
    };

    int number;

    printf("Enter a number between 1 and 15: ");
    scanf("%d", &number);

    if (number >= 1 && number <= 15) {
        printf("Number %d is %s\n", number, words[number]);
    } else {
        printf("Invalid input. Please enter a number between 1 and 15.\n");
    }

    
    printf("\nList of numbers from 1 to 15:\n");
    for (int i = 1; i <= 15; i++) {
        printf("%d = %s\n", i, words[i]);
    }

    return 0;
}
