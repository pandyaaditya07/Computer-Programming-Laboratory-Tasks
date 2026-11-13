//Question 27 : Find out factors of a given no.  e.g. 6-1,2,3,6
#include <stdio.h>
int main(){
    int user;
    printf("Enter a number : ");
    scanf("%d", & user);
    printf("Factors of %d are : \n", user);
    for(int i = 1; i <= user; i++){
        if(user % i == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}