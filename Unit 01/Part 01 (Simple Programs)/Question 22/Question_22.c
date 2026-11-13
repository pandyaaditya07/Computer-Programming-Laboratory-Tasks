//Question 22 : Calculate net sales where net sales = gross sales – 10% discount of gross sales.
#include <stdio.h>
int main(){
    float gross_sales;
    printf("Gross sales : ");
    scanf("%f", & gross_sales);
    printf("Net sales : %.2f\n", gross_sales - 0.1 * gross_sales);
    return 0;
}