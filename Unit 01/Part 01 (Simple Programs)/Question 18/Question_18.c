//Question 18 : Calculate area & perimeter of a rectangle. A = L*B, P = 2 (L+B)
#include <stdio.h>
int main(){
    float length, breadth;
    printf("Enter the length of the rectangle : ");
    scanf("%f", & length);
    printf("Enter the breadth of the rectangle : ");
    scanf("%f", & breadth);
    printf("Length : %.2f\nBreadth : %.2f\nArea : %.2f\nPerimeter : %.2f\n", length, breadth, length * breadth, 2.0 * (length + breadth));
    return 0;
}