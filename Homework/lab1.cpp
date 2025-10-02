#include <stdio.h>

int main() {
    int a, b, c, totalValue ;

    //Ask the user to enter the number
    printf( "enter the 1st value: " ) ;
    scanf( "%d", &a ) ;
    printf( "enter the 2st value: " ) ;
    scanf( "%d", &b ) ;
    printf( "enter the 3st value: " ) ;
    scanf( "%d", &c ) ;

    //add all the three numbers
    totalValue = a + b + c ;

    //print out the result
    printf( "total value: %d", totalValue ) ;
}
