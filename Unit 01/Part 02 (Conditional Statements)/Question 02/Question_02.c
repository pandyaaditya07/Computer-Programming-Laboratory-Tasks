//Question 02 : Find out largest and smallest of three values.
#include <stdio.h>
int main() {
    float num1, num2, num3; 
    // 1. Correct inputs (fixed the &num1 typo for num3)
    printf("Num1 : ");
    scanf("%f", &num1);
    printf("Num2 : ");
    scanf("%f", &num2);
    printf("Num3 : ");
    scanf("%f", &num3);    
    if (num1 == num2 && num2 == num3) {
        printf("All three numbers are equal (%.2f).\n", num1);
    } 
    else {
        //Finding the greatest number : 

        if (num1 >= num2 && num1 >= num3) {
            printf("%.2f is the largest.\n", num1);
        } else if (num2 >= num1 && num2 >= num3) {
            printf("%.2f is the largest.\n", num2);
        } else {
            printf("%.2f is the largest.\n", num3);
        }
        
        //Finding the smallest number : 

        if (num1 <= num2 && num1 <= num3) {
            printf("%.2f is the smallest.\n", num1);
        } else if (num2 <= num1 && num2 <= num3) {
            printf("%.2f is the smallest.\n", num2);
        } else {
            printf("%.2f is the smallest.\n", num3);
        }
    }
    return 0;
}
