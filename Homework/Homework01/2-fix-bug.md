
## โจทย์
จงแก้ Bug ของโปรแกรมดังต่อไปนี้ เพื่อให้โปรแกรมสามารถรันได้ตามปกติ

```c++
#include <studio .h>
int main() 
    printf( "Hello, I'm Javis (RMUTL-Version).\n" ) 
    printf( "This is my first time to coding with C language.\n" ) ;
    print( "Today is my birthday.\n" ) 
    return '0' ;
```

## FIX CODE
```c++
#include <stdio.h> //fix typo

int main() { //add curly brackets since it's a function.
    printf("Hello, I'm Javis (RMUTL-Version).\n");
    printf("This is my first time to coding with C language.\n");
    printf("Today is my birthday.\n"); //use printf and not print since printf is used for printing out a certain format spacing, numbers, etc in a certain way
    return 0; // '0' is a character string which will be return the value of '48' instead of 0
}
```

## TEST CASE
### Input
```bash
ไม่มี
```
### Output
```bash
Hello, I'm Javis (RMUTL-Version).
This is my first time to coding with C language.
Today is my birthday.
```
![Screenshot (99)](https://github.com/user-attachments/assets/e17e5a1c-dad7-4619-a9f3-e7cad3dad1c9)
