## เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
```c++
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
```

## Fixed code
```c++
#include <stdio.h>

int main() {
    //declare variable for first and last name
    char First_name[50];
    char Last_name[50];
    
    //get input from user
    printf("Enter your first name: ");
    scanf("%s", First_name);
    printf("Enter your last name: ");
    scanf("%s", Last_name);

    //print out the result from user
    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand", First_name, Last_name);

    //ended the program
    return 0;
}
```
```c++
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
```
![Screenshot (100)](https://github.com/user-attachments/assets/8726a2e1-eb8e-4a3b-99fc-25a6c016f363)
![Screenshot (101)](https://github.com/user-attachments/assets/00a5c713-763c-4330-82fd-74dba52f632f)

