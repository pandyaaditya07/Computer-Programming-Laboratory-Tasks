//Question 08 : Convert dollars into Rs. Where 1 $ = 48 Rs.
#include <stdio.h>
int main(){
    float dollars;
    printf("Enter dollars : ");
    scanf("%f", & dollars);
    printf("Dollars : %.2f\nRupees : %.2f\n", dollars, dollars * 48);
    return 0;
}