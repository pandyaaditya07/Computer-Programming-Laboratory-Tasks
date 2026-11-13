//Question 03 : Read a content of the file line by line. (Hint: fgets())
#include <stdio.h>
int main(){
    FILE *fp;
    char str[200];
    fp = fopen("data.txt", "r");
    if (fp == NULL){
        printf("File cannot be opened.");
        return 0;
    }
    printf("Contents of the file:\n");
    while (fgets(str, sizeof(str), fp) != NULL){
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}