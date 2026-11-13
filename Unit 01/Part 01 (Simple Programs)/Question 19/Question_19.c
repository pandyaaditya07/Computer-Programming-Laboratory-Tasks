//Question 19 : Calculate area of a circle. A = 22/7 * R * R.
#include <stdio.h>
int main(){
    printf("Enter the radius of the circle : ");
    float radius;
    scanf("%f", & radius);
    printf("Radius : %.2f\nArea : %.2f\n", radius, (22.0 * radius * radius)/7.0);
    return 0;
}