//Question 12 : Print your name n times.
#include <stdio.h>
int main(){
    int number_of_times;
    char name[50];
    printf("Enter your name : ");
    fgets(name, sizeof(name),stdin);
    printf("How many times you want to print your name : ");
    scanf("%d", & number_of_times);
    for(int i = 1; i <=  number_of_times; i++){
        printf("%d. %s", i, name);
    }
    return 0;
}