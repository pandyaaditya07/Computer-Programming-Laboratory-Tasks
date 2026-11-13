//Question 02 :  Instead of characters, accept one line at a time from the user and write it into the file.(Hint: use gets() and fputs())
#include <stdio.h>
#include <string.h>
int main(){
    FILE *fp;
    char str[200];
    fp = fopen("data.txt", "w");
    if (fp == NULL){
        printf("File cannot be opened.");
        return 0;
    }
    printf("Enter text (type END to stop):\n");
    while (fgets(str, sizeof(str), stdin) != NULL){
        str[strcspn(str, "\n")] = '\0';

        if (strcmp(str, "END") == 0)
            break;

        fputs(str, fp);
        fputc('\n', fp);
    }
    fclose(fp);
    printf("Data written successfully into the file.");
    return 0;
}