//Question 08 :  Check whether a string is a Palindrome String or not.
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i, j, length, flag = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    length = strlen(str);
    for (i = 0, j = length - 1; i < j; i++, j--){
        if (str[i] != str[j]){
            flag = 0;
            break;
        }
    }
    if (flag == 1){
        printf("The string is a Palindrome.");
    }    
    else{
        printf("The string is not a Palindrome.");
    }    
    return 0;
}