//Queston 03 : Write a recursive function to calculate factorial of a number.
#include <stdio.h>
int factorial(int n);
int main(){
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0 || n > 12){
        printf("Enter a number between 0 and 12.");
    }
    else{
        result = factorial(n);
        printf("Factorial = %d", result);
    }
    return 0;
}
int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}