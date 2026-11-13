//Question 04 : Accept a record consisting of Roll No. and name from the user and store it in the file. The program should terminate when user is not willing to enter more records. The data stored in a file must be directly opened in MS-Excel.
#include <stdio.h>
#include <string.h>
int main(){
    FILE *fp;
    int roll;
    char name[100];
    char choice;
    fp = fopen("students.csv", "w");
    if (fp == NULL){
        printf("File cannot be opened.");
        return 0;
    }
    fprintf(fp, "Roll No,Name\n");
    do{
        printf("Enter Roll Number: ");
        scanf("%d", &roll);
        getchar();
        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        fprintf(fp, "%d,%s\n", roll, name);
        printf("Do you want to enter another record? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    fclose(fp);
    printf("\nRecords saved successfully in students.csv");
    printf("\nYou can open this file in MS-Excel.");
    return 0;
}