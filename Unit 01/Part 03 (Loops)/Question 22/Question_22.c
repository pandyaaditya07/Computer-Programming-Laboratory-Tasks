//Question 22 : Count how many digits are there in a given number. e.g. 351-3.
#include <stdio.h>
int main(){
    int count = 0, user, num, original_number;
    printf("Enter a number : ");
    scanf("%d", & user);
    original_number = user;
    while(user > 0){
        num = user % 10;
        count++;
        user = user / 10;
    }
    printf("Number : %d\nTotal digits : %d\n", original_number, count);
    return 0;
}