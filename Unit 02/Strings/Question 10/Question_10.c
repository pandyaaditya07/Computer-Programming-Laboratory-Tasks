//Question 10 : Print characters of a string vertically.
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i, length;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    length = strlen(str);
    printf("Characters vertically:\n");
    for (i = 0; i < length; i++){
        printf("%c\n", str[i]);
    }
    return 0;
}