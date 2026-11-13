//Question 01 : Write a function power (a, b), to calculate the value of a raised to b.
#include <stdio.h>
double power(double a, int b);
int main(){
    double a, result;
    int b;
    printf("Enter base: ");
    scanf("%lf", &a);
    printf("Enter exponent: ");
    scanf("%d", &b);
    if (a == 0 && b < 0){
        printf("Power is not defined.");
    }
    else{
        result = power(a, b);
        printf("Answer = %.2f", result);
    }
    return 0;
}
double power(double a, int b){
    if (b == 0){
        return 1;
    }
    else if (b > 0){
        return a * power(a, b - 1);
    }
    else{
        return power(a, b + 1) / a;
    }
}