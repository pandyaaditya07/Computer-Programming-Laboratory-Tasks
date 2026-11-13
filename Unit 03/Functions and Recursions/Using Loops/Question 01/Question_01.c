//Question 01 :  Write a function power (a, b), to calculate the value of a raised to b.
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
        printf("Answer = %.2lf", result);
    }
    return 0;
}
double power(double a, int b){
    double result = 1.0;
    int i;
    if (b >= 0){
        for (i = 0; i < b; i++){
            result = result * a;
        }
    }
    else{
        for (i = 0; i > b; i--){
            result = result * a;
        }
        result = 1.0 / result;
    }
    return result;
}