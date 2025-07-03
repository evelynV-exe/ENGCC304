## โจทย์
เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด

## FIX CODE
```c++
#include <stdio.h>

int main() {
    //declare the variables
    char employee_id[11]; //using char to contain employee id instead of int and make it read until 10 characters but put 11 there because need a space for the \0
    int working_hour, salary_per_hr, salary; 

    //get user input information
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", employee_id);

    printf("Input the working hrs: ");
    scanf("%d", &working_hour);

    printf("Salary amount/hr: ");
    scanf("%d", &salary_per_hr);

    //calculate the salary
    salary = working_hour * salary_per_hr;
    
    //display output
    printf("Employees ID = %s \n", employee_id);
    printf("Salary = U$ %d", salary);

    return 0;
}
```

## TEST CASE 1
### Input
```bash
Input the Employees ID(Max. 10 chars): 
0342
Input the working hrs: 
8
Salary amount/hr: 
15000

```
### Output
```bash
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
```
![Screenshot (103)](https://github.com/user-attachments/assets/68078aa9-91d9-483c-b7d1-59aa336e3a7b)

## TEST CASE 2
### Input
```bash
Input the Employees ID(Max. 10 chars): 
0000500349
Input the working hrs: 
11
Salary amount/hr: 
34000

```
### Output
```bash
Expected Output:
Employees ID = 0000500349
Salary = U$ 374000.00
```
![Screenshot (104)](https://github.com/user-attachments/assets/cc708fc4-4905-4efc-9de4-5e39203a5780)
