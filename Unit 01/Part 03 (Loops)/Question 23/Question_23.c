//Question 23 : Summation of digits of a given number. e.g. 351 = 1+5+3 = 9
#include <stdio.h>
int main(){
    int user, num, original_number, sum = 0;
    printf("Enter a number : ");
    scanf("%d", & user);
    original_number = user;
    while(user > 0){
        num = user % 10;
        sum += num;
        user = user / 10;
    }
    printf("Number : %d\nSum : %d\n", original_number, sum);
    return 0;
}