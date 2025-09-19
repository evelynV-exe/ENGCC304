## โจทย์ทบทวนความรู้
เขียนโปรแกรมภาษาซีสำหรับคำนวณเงินเดือนสุทธิและโบนัสของโปรแกรมเมอร์ตามเงื่อนไขดังนี้:

### โปรแกรมจะรับข้อมูลเบื้องต้นจากผู้ใช้ดังนี้:
ตำแหน่งงาน (เช่น Junior Programmer, Mid-Level Programmer, Senior Programmer) โดยใช้ตัวเลข 1, 2, หรือ 3 แทนตามลำดับ
- จำนวนปีที่ทำงาน (อายุงาน)
- จำนวนโปรเจคที่สำเร็จในปีนี้

### การคำนวณโบนัส:

#### โปรแกรมเมอร์จะได้รับโบนัสตามอายุงาน ดังนี้:
- หากอายุงานน้อยกว่า 1 ปี จะไม่ได้รับโบนัส
- หากอายุงาน 1-3 ปี ได้รับโบนัส 10% ของเงินเดือน
- หากอายุงาน 4-5 ปี ได้รับโบนัส 15% ของเงินเดือน
- หากอายุงานมากกว่า 5 ปี ได้รับโบนัส 20% ของเงินเดือน
- นอกจากนี้ยังมีโบนัสพิเศษหากโปรแกรมเมอร์ทำโปรเจคได้สำเร็จมากกว่า 5 โปรเจค โดยจะได้รับโบนัสเพิ่มอีก 5% ของเงินเดือน

#### การกำหนดเงินเดือนพื้นฐานตามตำแหน่ง:
- Junior Programmer: 20,000 บาท
- Mid-Level Programmer: 35,000 บาท
- Senior Programmer: 50,000 บาท

#### โปรแกรมจะคำนวณและแสดงผลดังนี้:
- เงินเดือนพื้นฐาน
- โบนัสตามอายุงาน
- โบนัสพิเศษ (ถ้ามี)
- เงินเดือนสุทธิ (เงินเดือนพื้นฐาน + โบนัสตามอายุงาน + โบนัสพิเศษ)

## FIX CODE
```c++
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
```

## TEST CASE
### Input
```bash
Position: 1  (Junior Programmer)
Years of Experience: 2
Number of Projects Completed this Year: 4
```
### Output
```bash
Base Salary: 20000 THB
Experience Bonus: 2000 THB
Special Bonus: 0 THB
Net Salary: 22000 THB
```

## TEST CASE
### Input
```bash
Position: 3  (Senior Programmer)
Years of Experience: 6
Number of Projects Completed this Year: 7
```
### Output
```bash
Base Salary: 50000 THB
Experience Bonus: 10000 THB
Special Bonus: 2500 THB
Net Salary: 62500 THB
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
