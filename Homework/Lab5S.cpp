#include <stdio.h>

int main() {
    int test_score = 0;
    
    printf("Enter your score here: ");
    //if to check that the input is a number or not
    if(scanf("%d", &test_score) != 1) {
        printf("please enter number only.");
        return 1;
    }//end if
    
    printf("Grade: ");
    if (test_score >= 80) {
        printf("A !");
    } else if (test_score >= 75 && test_score < 80) {
        printf("B+ !");
    } else if (test_score >= 70 && test_score < 75) {
        printf("B !");
    } else if (test_score >= 65 && test_score < 70) {
        printf("C+ !");
    } else if (test_score >= 60 && test_score < 65) {
        printf("C !");
    } else if (test_score >= 55 && test_score < 60) {
        printf("D+ !");
    } else if (test_score >= 50 && test_score < 55) {
        printf("D !");
    } else {
        printf("F !");
    }//end if

    return 0;
}//end function
