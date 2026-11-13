//Question 01 : Accept 5 values and print them later on.
#include <stdio.h>
int main(){
    int array[5];
    printf("Enter 5 values : \n");
    for(int i = 0; i < 5; i++){
        printf("Enter number %d : ", i + 1);
        scanf("%d", & array[i]);
    }
    char user;
    printf("You want to print the array ? (y/n) : ");
    scanf(" %c", & user);
    if (user == 'y'){
        for(int j = 0; j < 5; j++){
            printf("%d\n", array[j]);
        }
    }
    else{
        printf("Ok.\n");
    }
    return 0;
}