//Question 20 : Calculate area of a triangle. A = H*L/2.
#include <stdio.h>
int main(){
    float height, base;
    printf("Height : ");
    scanf("%f", & height);
    printf("Base : ");
    scanf("%f", & base);
    printf("Area : %.2f\n", height * base / 2.0);
    return 0;
}