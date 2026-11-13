/*
Question 05 :Find out net sales where net sales = gross sales – discount.
If gross sales > 20000, discount is 15%
If gross sales > 10000, discount is 10% otherwise 5%.
*/
#include <stdio.h>
int main(){
    printf("\n\n");
    float gross_sales, net_sales, discount;
    printf("Enter gross sales : ");
    scanf("%f", & gross_sales);
    if (gross_sales < 0){
        printf("Invalid input..\n");
        return 1;
    }
    else if (gross_sales > 20000){
        discount = 0.15 * gross_sales;
    }
    else if (gross_sales > 10000){
        discount = 0.10 * gross_sales;
    }
    else{
        discount = 0.05 * gross_sales;
    }
    net_sales = gross_sales - discount;
    printf("Gross Sales : %.2f\nDiscount : %.2f\nNet Sales : %.2f\n", gross_sales, discount, net_sales);
    return 0;
}