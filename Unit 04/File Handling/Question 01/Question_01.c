//Question 01 : Read a file and count no.of lines, words, characters, spaces, in it.
#include <stdio.h>
#include <ctype.h>
int main(){
    FILE *fp;
    int ch, lastChar = '\0';
    int lines = 0, words = 0, characters = 0, spaces = 0;
    int inWord = 0;
    fp = fopen("data.txt", "r");
    if (fp == NULL){
        printf("File cannot be opened.");
        return 0;
    }
    while ((ch = fgetc(fp)) != EOF){
        characters++;
        if (ch == '\n'){
            lines++;
        }
        if (ch == ' '){
            spaces++;
        }    
        if (isspace((unsigned char)ch)){
            inWord = 0;
        }
        else if (inWord == 0){
            words++;
            inWord = 1;
        }
        lastChar = ch;
    }
    if (characters > 0 && lastChar != '\n'){
        lines++;
    }
    fclose(fp);
    printf("Number of lines = %d\n", lines);
    printf("Number of words = %d\n", words);
    printf("Number of characters = %d\n", characters);
    printf("Number of spaces = %d\n", spaces);
    return 0;
}