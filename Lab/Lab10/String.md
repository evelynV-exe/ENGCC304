## โจทย์

จงเขียนโปรแกรมเพื่อรับคำจากผู้ใช้งาน เพื่อตรวจสอบว่า คำที่กรอกมามีลักษณะเป็นคำหรือวลีที่สามารถอ่านจากหลังไปหน้าหรือหน้าไปหลังแล้วยังคงความหมายเหมือนเดิมได้ โดยที่ หากคำนั้นสามารถอ่านจากหน้าไปหลังหรือหลังไปได้ ให้แสดงผลลัพธ์ว่า Pass แต่หากทำไม่ได้ให้ขึ้นว่า Not Pass


## FIX CODE
```c++
#include <stdio.h>

int main() {
    char word[ 20 ] ;
    int length = 0 ;
    int left = 0 ;
    int right = length - 1 ;
    bool isPalindrome = true ;

    //----|Ask the user for the word
    printf( "Enter word: " ) ;
    scanf( "%s", word ) ;

    //----|check the length of the word
    while ( word[length] != '\0' ) {
        length++ ;
    } // end while

    //----|Switch the places for the word to check if it's a palindrome or not
    while ( left < right ) {
        if ( word[ left ] != word[ right ] ) {
            isPalindrome = false ;
            break ;
        } // end if

        left++ ;
        right-- ;
    } // end while

    //----|Print the result
    if ( isPalindrome ) {
        printf( "Pass." ) ;
    } else {
        printf( "Not pass." ) ;
    } // end if

    return 0;
} // end function
```

## TEST CASE
### Input
```bash
Enter word:
radar
```
### Output
```bash
Pass.
```

## TEST CASE
### Input
```bash
Enter word:
hello
```
### Output
```bash
Not Pass.
```

## TEST CASE
### Input
```bash
Enter word:
Radar
```
### Output
```bash
Pass.
```

## TEST CASE
### Input
```bash
Enter word:
here
```
### Output
```bash
Not Pass.
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
