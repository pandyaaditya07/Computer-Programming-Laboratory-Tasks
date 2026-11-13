//Question 21 : Separate digits of a given no. e.g. 351—1,5,3.
#include <stdio.h>
int main(){
    int user, num;
    printf("Enter a number : ");
    scanf("%d", & user);
    if(user < 0){
        printf("0\n");
        return 1;
    }
    while(user > 0){
        num = user % 10;
        printf("%d ,",num);
        user = user / 10;
    }
    printf("\n");
    return 0;
}