#include <stdio.h>

int main() {
    //declare the variables
    char employee_id[11]; //using char to contain employee id instead of int and make it read until 10 characters but put 11 there because need a space for the \0
    int working_hour, salary_per_hr; 
    float salary;

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
    printf("Salary = U$ %.2f", salary);

    return 0;
} // end function
