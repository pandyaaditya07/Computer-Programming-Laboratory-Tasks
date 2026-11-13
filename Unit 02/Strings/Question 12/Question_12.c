//Question 12 : Print frequency of each vowel in a given string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    int i;
    int a = 0, e = 0, in = 0, o = 0, u = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++){
        switch (tolower((unsigned char)str[i])){
            case 'a':
                a++;
                break;

            case 'e':
                e++;
                break;

            case 'i':
                in++;
                break;

            case 'o':
                o++;
                break;

            case 'u':
                u++;
                break;
        }
    }
    printf("Frequency of vowels:\n");
    printf("A = %d\n", a);
    printf("E = %d\n", e);
    printf("I = %d\n", in);
    printf("O = %d\n", o);
    printf("U = %d\n", u);
    return 0;
}