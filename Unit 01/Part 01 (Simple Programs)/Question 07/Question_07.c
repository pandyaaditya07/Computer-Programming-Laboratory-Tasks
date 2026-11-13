//Question 07 : Convert minutes into hours.
#include <stdio.h>
int main(){
    float minutes;
    printf("Enter the time in minutes : ");
    scanf("%f", & minutes);
    printf("Minutes : %.2f\nHours : %.2f\n", minutes, minutes/60);
    return 0;
}