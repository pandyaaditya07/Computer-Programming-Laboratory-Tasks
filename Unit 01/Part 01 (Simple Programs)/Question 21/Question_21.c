/*
Question 21 : Calculate net salary :
where net salary = gross salary + allowance – deduction.
Allowances are 10% while deductions are 3% of gross salary.
*/
#include <stdio.h>
int main(){
    float gross_salary;
    printf("Gross salary : ");
    scanf("%f", & gross_salary);
    printf("Allowance = %.2f\nDeduction : %.2f\nNet salary : %.2f\n", gross_salary * 0.1, gross_salary * 0.03, gross_salary + gross_salary * 0.1 - 0.03 * gross_salary);
    return 0;
}