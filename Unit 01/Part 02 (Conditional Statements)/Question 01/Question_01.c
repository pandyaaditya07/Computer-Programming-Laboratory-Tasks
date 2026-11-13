//Question 01 : Find out largest and smallest of two values.
#include <stdio.h>
int main(){
    float num1,num2;
    printf("Num1 : ");
    scanf("%f", & num1);
    printf("Num2 : ");
    scanf("%f", & num2);
    if (num1 > num2){
        printf("%.2f is greater.\n",num1);
    }
    else{
        printf("%.2f is greater.\n",num2);
    }
    return 0;
}