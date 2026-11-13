//Question 01 : Find out length of a string.
#include <stdio.h>
#include <strings.h>
#include <string.h>
int main(){
    int size; 
    printf("Of what size will be your name : ");
    scanf("%d", & size);
    char string[size + 1];
    printf("Enter your name : ");
    getchar();
    fgets(string,  sizeof(string), stdin);
    printf("The length of the string is : %lu", strlen(string) - 1);
    return 0;
}