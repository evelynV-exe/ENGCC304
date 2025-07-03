## โจทย์
จงแก้ไขโค้ดต่อไปนี้ ให้สามารถรับค่าจากผู้ใช้ เพื่อแสดงผลบนหน้าจอคอมพิวเตอร์ให้ได้ พร้อมทั้งจัดรูปแบบให้ตรงตาม Syntax ที่เรียนมาในห้องเรียน

```c++
#include <stduio.h>

int main() {
    char Name[50] ;
    int  Age = 0 ;
    printf( "Enter your name: " ) 
    scanf( "%s", Name ) ;
    printf( "Enter your age: " ) ;
    scanf( "%d", Age ) ;
    print( "- - - - - -\n" ) ;
    printf( "Hello %s \n", ___ ) ; 
    printf( "Age = %d\n", ___ ) ; 
    
}//end main function
```

## FIX CODE
```c++
#include <stdio.h> //fix typo from stduio to stdio

int main() {
    char name[50];
    int  Age; //deleted the = 0 part out since we want to store the age from user
    
    printf( "Enter your name: ");
    scanf("%s", name );

    printf("Enter your age: ");
    scanf("%d", &Age); //Age is an integer and we added '&' to be its address

    printf("- - - - - -\n");
    printf("Hello %s \n", name); //replace the empty space with variable above: name
    printf("Age = %d \n", Age); //replace the empty space with variable above: Age

    return 0; //to say that the program ran successfully
}//end main function
```

## TEST CASE
### Input
```bash
Enter your name: Benjarat
Enter you age: 18
```
![Screenshot (95)](https://github.com/user-attachments/assets/6406581a-a330-441f-88e7-a4bd19ba5aad)

### Output
```bash
- - - - - -
Hello Benjarat
Age = 18
```
![Screenshot (96)](https://github.com/user-attachments/assets/26e768ef-a8fd-4f10-aa35-836c5ff484c0)
