//Question 06 : Compare two strings lexicographically and print which one is greater or lower or print both strings are same.
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    int result;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    result = strcmp(str1, str2);
    if (result == 0){
        printf("Both strings are same.");
    }
    else if (result > 0){
        printf("First string is greater.");
    }
    else{
        printf("Second string is greater.");
    }    
    return 0;
}