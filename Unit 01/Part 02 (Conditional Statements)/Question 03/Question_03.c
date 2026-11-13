/*
Question 03 : Find out net salary where net salary = gross salary + allowances – deductions.
If gross salary > 10000, allowances are 10%, deductions are 3% 
If gross salary > 5000, allowances are 7%, deduction are 2%
*/

#include <stdio.h>
int main(){
    float net_salary, gross_salary, allowances, deductions;
    printf("Enter your gross salary : ");
    scanf("%f", & gross_salary);
    if (gross_salary <= 0){
        printf("Invalid input, please enter a positive number.\n");
    }
    else if (gross_salary > 10000){
        allowances = 0.10 * gross_salary;
        deductions = 0.03 * gross_salary;
        net_salary = gross_salary + allowances - deductions;
        printf("Net salary : %.2f\n", net_salary);
    }
    else if (gross_salary > 5000){
        allowances = 0.07 * gross_salary;
        deductions = 0.02 * gross_salary;
        net_salary = gross_salary + allowances - deductions;
        printf("Net salary : %.2f\n", net_salary);
    }
    else{
        printf("Net salary = %.2f\n", gross_salary);
    }
    return 0;
}