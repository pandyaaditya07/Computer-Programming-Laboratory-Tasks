//Question 04 : Convert a string to a toggle case. E.g. AbC -> aBc.
#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include <string.h>
int main(){
    int size;
    printf("Enter the size of your name : ");
    scanf("%d", & size);
    char name[size + 1];
    printf("Enter your name : ");
    getchar();
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    for(int i = 0; name[i] != 0;  i++){
        if(isupper(name[i])){
            name[i] = tolower(name[i]);
        }
        else{
            name[i] = toupper(name[i]);
        }
    }
    printf("The toggle-cased name is : %s\n", name);
    return 0;
}