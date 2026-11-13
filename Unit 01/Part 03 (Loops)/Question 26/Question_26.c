//Question 26 : Find out whether a given no. is armstrong no. or not. If sum of cube of digits = no. itself then it is the armstrong no. e.g. 153.
#include <stdio.h>
int main(){
    int sum = 0, user, num, original_number;
    printf("Enter a number : ");
    scanf("%d", & user);
    original_number = user;
    while(user > 0){
        num = user % 10;
        sum = sum + num*num*num;
        user = user / 10;
    }
    if(sum == original_number){
        printf("It's an armstrong number.\n");
    }
    else{
        printf("It's not an armstrong number.\n");
    }
    return 0;
}