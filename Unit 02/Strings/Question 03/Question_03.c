//Question 03 : Convert a string to an upper case.
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
int main(){
    int size;
    printf("Enter the size of your name : ");
    scanf("%d", & size);
    getchar();
    char name[size + 1];
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name,"\n")] = '\0';
    for(int i = 0; name[i] != '\0'; i++){
        name[i] = toupper(name[i]);
    }
    printf("Upper-cased name : %s\n", name);
    return 0;
}