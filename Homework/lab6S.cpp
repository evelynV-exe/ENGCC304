#include <stdio.h>

//จงเขียนโปรแกรมรับค่าตัวเลขจากผู้ใช้ ใส่ไว้ในตัวแปร N และทำการแสดงข้อมูลดังเงื่อนไขต่อไปนี้
//- หากผู้ใช้กรอกเลขคี่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ 1 ถึง N และให้แสดงเฉพาะตัวเลขคี่เท่านั้น
//- หากผู้ใช้กรอกเลขคู่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ N ถึง 0 และให้แสดงเฉพาะตัวเลขคู่เท่านั้น

int main() {
    //initialize N
    int N;
    printf("enter the number N: ", N);
    scanf("%d", &N);

    if (N % 2 == 0) {
        printf("Series: ");
        //N is even
        for (int i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }//end for

    } else {
        printf("Series: ");
        //N is odd
        for (int i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }//end for
    }//end if

    return 0;
} // end main
