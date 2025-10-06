#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice;
    int score = 100;
    int randomNum;
    int userGuess;
    int min = 1;
    int max = 100;

    srand(time(NULL));
    randomNum = rand() % 100 + 1;

    while(1) {
        printf("Do you want to play game? (1 for Yes, -1 for exit): ");

        if (scanf("%d", &userChoice) != 1) {
            printf("Please enter 1 or -1.\n");
            while (getchar() != '\n');
            continue;
        }// end if

        if (userChoice == 1) {
            printf("\nEnter your guess (1-100): ");
            scanf("%d", &userGuess);

            while (1) {
                if (userGuess == randomNum) {
                    printf("\nGuess correct! The winning number is %d", randomNum);
                    printf("\nYour score is %d.\n", score);
                    break;
                } else {
                    score -= 10;
                    printf("\nYour score is %d", score);
                } //end if

                if (score == 0) {
                    printf("\nGame over! Your score is 0. The winning number was %d", randomNum);
                    break;
                }// end if

                if (userGuess > randomNum) {
                    printf("\nYour guess is too high. The winning number is lower than %d. (Score = %d).\n", userGuess, score);
                    if (userGuess + 1 >= min) {
                        max = userGuess - 1;
                    }// end if
                    printf("\nEnter your guess (%d - %d): ", min, max);
                    scanf("%d", &userGuess);
                } else {
                    printf("\nYour guess is too low. The winning number is higher than %d. (Score = %d).\n", userGuess, score);
                    if (userGuess + 1 <= max) {
                        min = userGuess + 1;
                    }// end if
                    printf("\n Enter your guess (%d - %d): ", min, max);
                    scanf("%d", &userGuess);
                }// end if
            }
        } else {
            printf("See you again, player.");
            break;
        }// end if
    }// end while
}// end function
