//Question 29 : Check whether a given no. is prime no. or not e.g. 7,11,13,17.
#include <stdio.h>
int main(){
    int user;
    printf("Enter a number : ");
    scanf("%d", & user);
    for(int i = 1; i < user; i++){
        if (user % i == 0){
            continue;
        }
        else{
            printf("%d is a prime number.\n", user);
        }
    }
    return 0;
}