//Question 14 : Convert celcius into Fahrenheit. F = (9/5 * C) + 32
#include <stdio.h>
int main(){
    float celcius;
    printf("Enter the temperature in Celcius : ");
    scanf("%f", & celcius);
    printf("Celcius : %.2f\nFahrenheit : %.2f\n", celcius, (9*celcius)/5 + 32);
    return 0;
}