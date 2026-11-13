//Question 09 : Convert Rs. into dollars where 1 $ = 48 Rs.
#include <stdio.h>
int main(){
    float rupees;
    printf("Enter rupees : ");
    scanf("%f", & rupees);
    printf("Dollars : %.2f\nRupees : %.2f\n", rupees, rupees / 48);
    return 0;
}