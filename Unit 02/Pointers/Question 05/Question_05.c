//Question 05 : Write a program that takes a set of names of individuals and abbreviates the first, middle and other names except the last name by their first letter.
#include <stdio.h>
#include <string.h>
int main(){
    char name[200];
    char *words[20];
    char *token;
    int count = 0, i;
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    token = strtok(name, " \t\n");
    while (token != NULL && count < 20){
        words[count] = token;
        count++;

        token = strtok(NULL, " \t\n");
    }
    if (count == 0){
        printf("No name entered.");
        return 0;
    }
    printf("Abbreviated name: ");
    for (i = 0; i < count - 1; i++){
        printf("%c. ", words[i][0]);
    }
    printf("%s", words[count - 1]);
    return 0;
}