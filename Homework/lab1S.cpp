#include <stdio.h> // corrected spelling

int main() {
    char Name[50] ;
    int  Age = 0 ;
    printf( "Enter your name: " ) ; // missing semi-colon
    scanf( "%s", Name ) ;
    printf( "Enter your age: " ) ;
    scanf( "%d", &Age ) ; // need to have & so that the value will store at age's address
    printf( "- - - - - -\n" ) ; // need to be printf not just print
    printf( "Hello %s \n", Name ) ; 
    printf( "Age = %d\n", Age ) ; 
    
}//end main function
