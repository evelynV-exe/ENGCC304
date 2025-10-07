#include <stdio.h>
#include <string.h>

void format_with_commas(float num, char *output) {
    char temp[50];
    sprintf(temp, "%.2f", num); // Convert float to string with 2 decimal places

    char *dot = strchr(temp, '.'); // Find decimal point
    int int_len = dot - temp;

    int comma_count = (int_len - 1) / 3;
    int i = int_len - 1;
    int j = int_len + comma_count - 1;

    // Copy decimal part
    output[j + 1] = '.';
    output[j + 2] = dot[1];
    output[j + 3] = dot[2];
    output[j + 4] = '\0';

    // Insert commas and digits
    int digit_count = 0;
    while (i >= 0) {
        output[j--] = temp[i--];
        digit_count++;
        if (digit_count == 3 && i >= 0) {
            output[j--] = ',';
            digit_count = 0;
        }
    }
}

int main() {
    char employee_id[11];
    int working_hour, salary_per_hr;
    float salary;
    char formatted_salary[50];

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", employee_id);

    printf("Input the working hrs: ");
    scanf("%d", &working_hour);

    printf("Salary amount/hr: ");
    scanf("%d", &salary_per_hr);

    salary = working_hour * salary_per_hr;
    format_with_commas(salary, formatted_salary);

    printf("Employees ID = %s\n", employee_id);
    printf("Salary = U$ %s\n", formatted_salary);

    return 0;
}
