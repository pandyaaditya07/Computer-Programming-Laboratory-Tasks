//Question 23 : Calculate average of three subjects along with their total.
#include <stdio.h>
int main(){
    float sub1, sub2, sub3;
    printf("Subject 1 : ");
    scanf("%f", & sub1);
    printf("Subject 2 : ");
    scanf("%f", & sub2);
    printf("Subject 3 : ");
    scanf("%f", & sub3);
    printf("Average : %.2f\nTotal : %.2f\n", (sub1 + sub2 + sub3)/3, sub1 + sub2 + sub3);
    return 0;
}