//Question 15 : Convert Fahrenheit into celcius. C = 5/9 * (F – 32)
#include <stdio.h>
int main(){
    printf("Enter the temperature in fahrenheit : ");
    float fahrenheit;
    scanf("%f", & fahrenheit);
    printf("Fahrenheit : %.2f\nCelcius : %.2f\n", fahrenheit, (5.0/9.0 * (fahrenheit - 32)));
    return 0;
}