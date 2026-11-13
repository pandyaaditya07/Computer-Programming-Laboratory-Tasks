//Question 11 : Print your name 5 times.
#include <stdio.h>
int main(){
    char name[60];
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);
    for (int i = 1; i <= 5; i++){
        printf("%d. %s", i, name);
    }
    return 0;
}