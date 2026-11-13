//Question 07 : Print sum of n natural nos.
#include <stdio.h>
int main(){
    int sum = 0, user;
    printf("Enter a number : ");
    scanf("%d", & user);
    if(user < 0){
        printf("Invalid input.\n");
        return 1;
    }
    for(int i = 1; i <= user; i++){
        sum += i;
    }
    printf("Sum : %d\n",sum);
    return 0;
}