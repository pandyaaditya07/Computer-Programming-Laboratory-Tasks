//Question 24 : Reverse digits of a given number.  e.g. 351—153.
#include <stdio.h>
int main(){
    int user, original_number, num;
    printf("Enter a number : ");
    scanf("%d", & user);
    while(user > 0){
        num = user % 10;
        printf("%d", num);
        user /= 10;
    }
    return 0;
}