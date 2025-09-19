## โจทย์
จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้
ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5
แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้

## FIX CODE
```c++
#include <stdio.h>

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} typedef S;

//----|to check the grade
const char* getGrade(float score) {
    if (score >= 80) return "A";
    else if (score >= 75) return "B+";
    else if (score >= 70) return "B";
    else if (score >= 65) return "C+";
    else if (score >= 60) return "C";
    else if (score >= 55) return "D+";
    else if (score >= 50) return "D";
    else return "F";
}

int main() {
    float avgScore;
    S student[3];

    printf("Enter the details of 3 students:\n");

    //----|Let user enter the data
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: \n");
        scanf(" %[^\n]", student[i].Name);  // allows full name with spaces
        printf("ID: \n");
        scanf("%s", student[i].ID);
        printf("Scores in Subject 1: \n");
        scanf("%f", &student[i].ScoreSub1);
        printf("Scores in Subject 2: \n");
        scanf("%f", &student[i].ScoreSub2);
        printf("Scores in Subject 3: \n");
        scanf("%f", &student[i].ScoreSub3);
        printf("Scores in Subject 4: \n");
        scanf("%f", &student[i].ScoreSub4);
        printf("Scores in Subject 5: \n");
        scanf("%f", &student[i].ScoreSub5);
    } // end for

    //----|Print the result
    for (int i = 0; i < 3; i++) {
        avgScore = (student[i].ScoreSub1 + student[i].ScoreSub2 + student[i].ScoreSub3 + student[i].ScoreSub4 + student[i].ScoreSub5) / 5;

        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", student[i].Name);
        printf("ID: %s\n", student[i].ID);
        printf("Scores: %.0f %.0f %.0f %.0f %.0f\n", student[i].ScoreSub1, student[i].ScoreSub2, student[i].ScoreSub3, student[i].ScoreSub4, student[i].ScoreSub5);
        printf("Grades: %s %s %s %s %s\n", getGrade(student[i].ScoreSub1), getGrade(student[i].ScoreSub2), getGrade(student[i].ScoreSub3), getGrade(student[i].ScoreSub4), getGrade(student[i].ScoreSub5));
        printf("Average Scores: %.1f\n", avgScore);
    } // end for

    return 0;
} // end function
```

## TEST CASE
### Input
```bash
Enter the details of 3 students :
Student 1:
Name: 
John Doe
ID: 
101
Scores in Subject 1: 
77
Scores in Subject 2: 
64
Scores in Subject 3: 
66
Scores in Subject 4: 
54
Scores in Subject 5: 
56

Student 2:
Name: 
Jane Smith
ID: 
102
Scores in Subject 1: 
43
Scores in Subject 2: 
70
Scores in Subject 3: 
76
Scores in Subject 4: 
77
Scores in Subject 5: 
80

Student 3:
Name: 
Mark Johnson
ID: 
103
Scores in Subject 1: 
77
Scores in Subject 2: 
74
Scores in Subject 3: 
76
Scores in Subject 4: 
81
Scores in Subject 5: 
69
```
### Output
```bash
Student 1:
Name: John Doe
ID: 101
Scores: 77 64 66 54 56
Grades: B+ C C+ D D+
Average Scores: 63.4

Student 2:
Name: Jane Smith
ID: 102
Scores: 43 70 76 77 80
Grades: F B B+ B+ A
Average Scores: 69.2

Student 3:
Name: Mark Johnson
ID: 103
Scores: 77 74 76 81 69
Grades: B+ B B+ A C+
Average Scores: 75.4
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
