//Question 12 : Insert a new number at the beginning of the array.
#include <stdio.h>
int main(){
    int size, number, user, new_index;
    printf("What should be the size of the array : ");
    scanf("%d", & size);
    int array[size], new_array[size+1];
    for(int n = 0; n < size + 1; n++){
        new_array[n] = 0;
    }
    printf("Created the array successfully.\n");
    printf("How many numbers you want to put in the array out of %d numbers : ", size);
    scanf("%d", & number);
    for(int i = 0; i < number; i++){
        printf("Enter element %d : ", i + 1);
        scanf("%d", & array[i]);
    }
    printf("Successfully entered %d numbers into the array out of %d numbers.\n", number, size);
    printf("Which element you want to enter in the array : ");
    scanf("%d", & user);
    new_array[0] = user;
    for(int j = 0; j < number; j++){
        new_index = j + 1;
        new_array[new_index] = array[j];
    }
    for(int k = 0; k < size + 1; k++){
        printf("%d\n", new_array[k]);
    }
    return 0;
}