//Question 17 : Calculate area & perimeter of a square. A = L^2, P = 4L
#include <stdio.h>
int main(){
    printf("Enter the Length of side of the square : ");
    float side;
    scanf("%f", & side);
    printf("Side : %.2f\nrea : %.2f\nPerimeter : %.2f\n", side, side * side, 4.0 * side);
    return 0;
}