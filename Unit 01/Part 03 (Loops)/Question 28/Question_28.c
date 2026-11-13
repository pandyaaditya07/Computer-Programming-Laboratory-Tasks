//Question 28 : Find out whether a given no. is perfect no. or not. If sum of factors upto half of a given no.=no. itself then no. is perfect no. e.g. 6=1+2+3=6
#include <stdio.h>
int main(){
    int user, num, original_number, sum = 0;
    printf("Enter a number : ");
    scanf("%d", & user);
    for(int i = 1; i <= user/2; i++){
        if(user % i == 0){
            sum += i;
        }
    }
    if (sum == user){
        printf("It is a perfect number.\n");
    }
    else {
        printf("It is not a perfect number.\n");
    }
    return 0;
}