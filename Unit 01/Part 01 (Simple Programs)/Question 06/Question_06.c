//Question 06 : Convert hours into minutes.
#include <stdio.h>
int main(){
    float hours;
    printf("Enter hours : ");
    scanf("%f", & hours);
    printf("Hours : %.2f\nMinutes : %.2f\n", hours, hours * 60);
    return 0;
}