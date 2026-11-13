//Question 04 : Print 1st n natural nos. 
#include <stdio.h>
int main(){
    int user;
    printf("Enter a number : ");
    scanf("%d", &user);
    for(int i = 1; i <= user; i++){
        printf("%d\n", i);
    }
    return 0;
}