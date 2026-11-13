//Question 34 : Print fibonacci series. 1,1,2,3,5,8,…upto n numbers.
#include <stdio.h>
int main(){
    int user, term_1 = 1, term_2 = 1, next;
    printf("Enter the terms : ");
    scanf("%d", & user);
    for (int i = 1; i <= user; i++){
        printf("%d\n", term_1);
        next = term_1 + term_2;
        term_1 = term_2;
        delauy(1600);
        term_2 = next;
    
    }
    return 0;
}