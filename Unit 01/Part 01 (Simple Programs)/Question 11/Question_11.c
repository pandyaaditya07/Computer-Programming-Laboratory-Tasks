//Question 11 : Convert grams into kg.
#include <stdio.h>
int main(){
    float grams;
    printf("Enter the weight in grams : ");
    scanf("%f", & grams);
    printf("Grams : %.2f\nKilograms : %.2f\n", grams, grams / 1000);
    return 0;
}