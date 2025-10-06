#include <stdio.h>

int position, expr, pYear, tSalary, eBonus, pBonus, base;
int bSalary[3] = {20000, 35000, 50000};
void salary();

int main() {
    printf("--------------------------------------\n");
    printf("Position: ");
    scanf("%d", &position);
    printf("Years of experience: ");
    scanf("%d", &expr);
    printf("Number of projects completed this year: ");
    scanf("%d", &pYear);
    printf("--------------------------------------\n");
    
    base = bSalary[position - 1];

    salary();

    return 0;
} // end function

void salary() {

    //----|Check the position of the user input
    if (position == 1) {
        printf("Junior Programmer\n");
    } else if (position == 2 ) {
        printf("Mid-level Programmer\n");
    } else printf("Senior Programmer\n");

    //----|Calculate the experience bonus
    if (expr < 1) {
        eBonus = 0;
    } else if (expr >= 1 && expr <= 3) {
        eBonus = (base * 10) / 100;
    } else if (expr >= 3 && expr <= 5) {
        eBonus = (base * 15) / 100;
    } else eBonus = (base * 20) / 100;

    //----|Calculate the special bonus
    if (pYear > 5) {
        pBonus = (base * 5) / 100;
    } else {
        pBonus = 0;
    }

    //----|Total salary
    tSalary = base + eBonus + pBonus;

    //----|Print the final result
    printf("Base Salary: %d", base);
    printf("\nBonus: %d", eBonus);
    printf("\nSpecial Bonus: %d", pBonus);
    printf("\nTotal Salary: %d", tSalary);
} // end function
