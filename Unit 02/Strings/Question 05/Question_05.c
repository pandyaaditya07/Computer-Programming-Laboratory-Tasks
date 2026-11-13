//Question 05 :	Copy one string to another one.
#include <stdio.h>
#include <strings.h>
#include <string.h>
int main(){
    int size;
    printf("What is the size of your name : ");
    scanf("%d", & size);
    char name[size + 1], copy_name[size + 1];
    printf("Enter you name : ");
    getchar();
    fgets(name, sizeof(name), stdin);
    name[strcspn(name,"\n")] = '\0';
    for(int i = 0; name[i] != '\0'; i++){
        copy_name[i] = name[i];
    }
    printf("Here is a copy for your name : %s\n", copy_name);
    return 0;
}