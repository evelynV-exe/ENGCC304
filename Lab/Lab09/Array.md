## โจทย์
จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

## FIX CODE
```c++
#include <stdio.h>

int main() {
    int valueNum[ 100 ] ;
    int n = 0 ;
    
    //----|ask for the array size
    printf( "Enter the value of N: " ) ;
    scanf( "%d", &n ) ;
    
    //----|ask the user for number inputs
    printf( "-------------------------\n" ) ;
    for ( int i = 0; i < n; i++ ) {
        printf( "Enter the value [%d]: \n", i ) ;
        scanf( "%d", &valueNum[i] ) ;
    } // end for loop

    //----|print index numbers
    printf( "-------------------------\n" ) ;
    printf( "Index: \t" ) ;
    for ( int i = 0; i < n; i++ ) {
        printf( "%d ", i ) ;
    } // end for

    //----|Check for prime numbers and print the array result
    printf( "\nArray: \t" );
    for ( int i = 0; i < n; i++ ) {

        int num = valueNum[i] ;
        bool isPrime = true ;

        if ( num < 2 ) {
            isPrime = false ;
        } else {
            for ( int j = 2; j < num - 1; j++ ) {
                if ( num % j == 0 ) {
                    isPrime = false ;
                    break ;
                } // end if
            } // end for
        } // end if

        if ( isPrime ) {
            printf( "%d ", num ) ;
        } else {
            printf( "# " ) ;
        } //end if

    } // end for

    return 0;
} // end function
```

## TEST CASE
### Input
```bash
Enter N :
6
Enter value[0] :
19
Enter value[1] :
18
Enter value[2] :
27
Enter value[3] :
15
Enter value[4] :
4
Enter value[5] :
2
```
### Output
```bash
Index:  0  1  2  3  4  5
Array: 19  #  #  #  #  2
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
