## โจทย์
จงเขียนโปรแกรมทายตัวเลขซึ่งทำงานดังนี้
- ตอนเริ่มเกมผู้เล่นจะมีคะแนนเต็ม 100
- โปรแกรมจะสุ่มตัวเลขที่มีค่าตั้งแต่ 1 ถึง 100
- ให้ผู้เล่นทายว่าตัวเลขที่โปรแกรมสุ่มมามีค่าเป็นเท่าใด
- หากทายผิด โปรแกรมจะลบคะแนนของผู้เล่นไป 10 หน่วย พร้อมแจ้งคะแนนปัจจุบันให้ผู้เล่นทราบด้วย
- หากทายผิด โปรแกรมจะต้องบอกใบ้ว่าคำตอบที่ถูกมีค่า "มากกว่า" หรือ "น้อยกว่า" ตัวเลขที่ผู้ใช้ทาย
- หากทายผิด ให้โปรแกรมรอรับตัวเลขถัดไปได้เลย
- หากทายถูก ให้โปรแกรมแสดงความยินดีกับผู้ใช้ พร้อมแจ้งคะแนนปัจจุบันให้กับผู้เช่น
- เมื่อเล่นเสร็จโปรแกรมรอรับคำสั่งจากผู้ใช้ หากผู้ใช้กรอกเลข 1 จะเข้าสู่โหมดการเล่นเกมใหม่อีกครั้ง หากกด -1 ให้หยุดการทำงานของโปรแกรม

<br />หมายเหตุ : การสุ่มตัวเลขจะใช้คำสั่ง rand() ที่อยู่ใน stdlib.h หากต้องการสุ่มตัวเลข 0 ถึง 100 ต้องใช้คำสั่งดังนี้
```c++
rand() % 100 + 1
```
<br />หมายเหตุ : หากต้องการสุ่มตัวเลขที่เปลี่ยนแปลงตามเวลา ต้องใช้คำสั่ง srand( time( NULL ) ) ในตอนต้นของโปรแกรมด้วย
```c++
srand( time( NULL ) ) ;
```

## FIX CODE
```c++
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
```

## TEST CASE
### Input & Output
```bash
Do you want to play game (1=play,-1=exit) :
1

(Score=100)

Guess the winning number (1-100) :
20

Sorry, the winning number is HIGHER than 20. (Score=90)

Guess the winning number (21-100) :
50

Sorry, the winning number is LOWER than 50. (Score=80)

Guess the winning number (21-49) :
42

That is correct! The winning number is 42.

Score this game: 80

Do you want to play game (1=play,-1=exit) :
-1

See you again.
```

## TEST CASE
### Input & Output
```bash
Do you want to play game (1=play,-1=exit) :
hi

Please enter only 1 or -1.

Do you want to play game (1=play,-1=exit) :
-1

See you again.
```

## TEST CASE
### Input & Output
```bash
Do you want to play game (1=play,-1=exit) :
1

(Score=100)

Guess the winning number (1-100) :
20

Sorry, the winning number is HIGHER than 20. (Score=90)

Guess the winning number (21-100) :
50

Sorry, the winning number is LOWER than 50. (Score=80)

Guess the winning number (21-49) :
10

Sorry, the winning number is HIGHER than 21. (Score=70)

Guess the winning number (21-49) :
60

Sorry, the winning number is LOWER than 49. (Score=60)

Guess the winning number (21-49) :
22

Score this game: 60

That is correct! The winning number is 22.

Do you want to play game (1=play,-1=exit) :
1

(Score=100)

Guess the winning number (1-100) :
20

Score this game: 100

That is correct! The winning number is 20.

Do you want to play game (1=play,-1=exit) :
-1

See you again.
```

## มาตรฐานการตรวจตามหลักการเรียนรู้ของบลูม
| ลำดับการเรียนรู้ | เกณฑ์การวัด | คะแนน |
| -------- | -------- | -------- |
| รู้จำ | เห็นโครงสร้างของโค้ดโปรแกรมชัดเจน ได้มาตรฐาน | 1 pts |
| เข้าใจ | แก้ไขปัญหาได้ตามที่โจทย์กำหนด | 1 pts |
| ประยุกต์ใช้ | สามารถผ่านเงื่อนไขได้ทุก testcase | 1 pts |
| วิเคราะห์ | หาจุดผิดของโปรแกรมได้ | 1 pts |
| ประเมินค่า | โปรแกรมเสร็จสมบูรณ์ระยะเวลาที่กำหนด | 1 pts |
| สร้างสรรค์ | แก้ไขสถานการณ์ของโจทย์ | 1 pts |
||<p style='text-align: right !important;'>**รวม**</p>|**6 pts**|
