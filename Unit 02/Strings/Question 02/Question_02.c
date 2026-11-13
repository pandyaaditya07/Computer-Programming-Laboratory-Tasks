//Question 02 : Convert a string to a lower case.
#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <ctype.h>
int main(){
    int size; 
    printf("What is the size of your name : ");
    scanf("%d", & size);
    char name[size + 1];
    printf("Enter your name : ");
    getchar();
    fgets(name, sizeof(name), stdin);
    name[strcspn(name ,"\n")] = '\0';
    for(int i = 0 ; name[i] != '\0' ; i++){
        name[i] = tolower(name[i]);
    }
    printf("The lower-cased name is : %s\n", name);
    return 0;
}