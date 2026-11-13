//Question 04 : Accept and print later on three books names using array of pointers.
#include <stdio.h>
#include <string.h>
int main(){
    char book1[100], book2[100], book3[100];
    char *books[3] = {book1, book2, book3};
    int i;
    for (i = 0; i < 3; i++){
        printf("Enter book name %d: ", i + 1);
        fgets(books[i], 100, stdin);
        books[i][strcspn(books[i], "\n")] = '\0';
    }
    printf("\nNames of the books:\n");
    for (i = 0; i < 3; i++){
        printf("%s\n", books[i]);
    }
    return 0;
}