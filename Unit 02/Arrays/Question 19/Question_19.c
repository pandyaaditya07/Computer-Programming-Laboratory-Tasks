//Question 19 : Search a value within an array.
#include <stdio.h>
int main(){
    int size, user, temp = 0;
    printf("Enter the size of the array : ");
    scanf("%d", & size);
    int array[size];
    printf("Created the array.\n");
    printf("Enter %d elements into the array.\n", size);
    for(int i = 0; i < size; i++){
        printf("Enter element %d : ", i + 1);
        scanf("%d", & array[i]);
    }
    printf("Entered %d elements into the array successfully.\n", size);
    printf("Enter a number to check if it is in the array or not : ");
    scanf("%d", & user);
    for(int i = 0; i < size; i++){
        if(array[i] == user){
            printf("%d is present in the array at %d position and %d index of the created array.\n", user, i + 1, i);
            temp = 1;
        }
    }
    if(temp == 0){
        printf("%d is absent in the array.\n", user);
    }
    return 0;
}