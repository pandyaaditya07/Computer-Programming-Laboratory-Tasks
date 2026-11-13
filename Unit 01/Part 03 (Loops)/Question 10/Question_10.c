//Question 10 : Print factorial of a given number.
#include <stdio.h>
int main(){
    int user,fact = 1;
    printf("Enter a number : ");
    scanf("%d", & user);
    if(user < 0){
        printf("Invalid input..\n");
        return 1;
    }
    else if(user == 0){
        printf("%d! = 0\n",user);
    }
    for(int i = 1; i <= user; i++){
        fact *= i;
    }
    printf("%d! = %d\n", user, fact);
    return 0;
}