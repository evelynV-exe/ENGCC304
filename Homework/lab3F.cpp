#include <stdio.h>

int main() {
    float h, b, area;

    //ask user for the height and base
    printf("Enter the height of the triangle: ");
    scanf("%f", &h);
    printf("Enter the base of the triangle: ");
    scanf("%f", &b);

    //calculate the area of a triangle
    area = 0.5 * h * b;

    //print the result
    printf("Area: %.1f", area);
}//end main function
