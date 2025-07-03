//TODO: #9 Fix bug and arrange code in CODEX pattern.
#include <stdio.h> //fixed typo
#include <conio.h> // fixed typo

int main()
{
    float a, b = 3;
    bool _1 = 0;

    printf("%d ", _1);

    int i = 0;

    if (_1 != 0) { //added curly bracket
        printf("ok ");
    } else while (i <= 5) { //added curly bracket
        printf(" not-okey-%d ", ++i); //added semi-colon at the end
    }

    for (i = 3; i < 10; i += 1) { //added curly bracket
        if (i % 2 == (!1 ? 1 : 2)) { //added curly bracket
        printf("see see"); //added semi-colon at the end
        printf("haha");
        }
    }
    return 0;
}
