//Question 04 : Find out whether a given no. is divisible by 7 or not.
#include <stdio.h>
int main(){
    int user;
    printf("Enter a number : ");
    scanf("%d", & user);
    if (user % 7 == 0){
        printf("%d is divisible by 7.\n", user);
    }
    else{
        printf("%d is not divisible by 7.\n", user);
    }
    return 0;
}