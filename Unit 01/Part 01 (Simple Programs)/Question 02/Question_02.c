//Question 02 : Subtract two numbers.
#include <stdio.h>
int main(){
    float num1, num2;
    printf("Enter first number : ");
    scanf("%f", & num1);
    printf("Enter second number : ");
    scanf("%f", & num2);
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    return 0;
}