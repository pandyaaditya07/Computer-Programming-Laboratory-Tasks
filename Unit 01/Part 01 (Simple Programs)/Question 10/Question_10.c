//Question 10 : Convert dollars into pound where 1 $ = 48 Rs. And 1 pound = 70 Rs.
#include <stdio.h>
int main(){
    float dollars;
    printf("Enter Dollars : ");
    scanf("%f", & dollars);
    printf("Dollars : %.2f\nPounds : %.2f\n", dollars, (dollars*48.0)/70.0);
    return 0;
}