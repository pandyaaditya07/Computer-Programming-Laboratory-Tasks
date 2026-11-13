//Question 12 : Convert kgs into grams.
#include <stdio.h>
int main(){
    float kilograms;
    printf("Enter weight in kilograms : ");
    scanf("%f", & kilograms);
    printf("Kilograms : %.2f\nGrams : %.2f\n", kilograms, kilograms *(1000));
    return 0;
}