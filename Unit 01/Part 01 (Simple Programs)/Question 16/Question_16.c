//Question 16 : Calculate interest where I = PRN/100.
#include <stdio.h>
int main(){
    float principle, rate, number_of_years;
    printf("Enter Principle : ");
    scanf("%f", & principle);
    printf("Enter Rate of interest : ");
    scanf("%f", & rate);
    printf("Enter the number of years : ");
    scanf("%f", & number_of_years);
    printf("Principle : %.2f\nRate : %.2f\nNumber of years : %.2f\nInterest : %.2f\n", principle, rate, number_of_years, (principle * rate * number_of_years)/ 100.0);
    return 0;
}