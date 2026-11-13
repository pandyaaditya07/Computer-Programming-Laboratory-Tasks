//Question 06 :  Write a program to implement a calculator using separate functions for add, subtract, multiply, and divide.
#include <stdio.h>
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int main(){
    float a, b;
    int choice;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice){
        case 1:
            printf("Result = %.2f", add(a, b));
            break;

        case 2:
            printf("Result = %.2f", subtract(a, b));
            break;

        case 3:
            printf("Result = %.2f", multiply(a, b));
            break;

        case 4:
            if (b == 0)
                printf("Division by zero is not possible.");
            else
                printf("Result = %.2f", divide(a, b));
            break;

        default:
            printf("Invalid choice.");
    }

    return 0;
}
float add(float a, float b){
    return a + b;
}
float subtract(float a, float b){
    return a - b;
}
float multiply(float a, float b){
    return a * b;
}
float divide(float a, float b){
    return a / b;
}