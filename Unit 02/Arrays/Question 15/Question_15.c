//Question 15 : Delete a value from the first position of the array.
#include <stdio.h>
int main(){
    int size;
    printf("What should be the size of the array ? : ");
    scanf("%d", & size);
    int array[size], new_array[size-1];
    printf("Created array successfully..\n");
    for(int i = 0; i < size - 1; i++){
        new_array[i] = 0;
    }
    printf("Now enter %d elements in the array.\n", size);
    for(int j = 0; j < size; j++){
        printf("Enter element %d : ", j + 1);
        scanf("%d", & array[j]);
    }
    printf("Filled %d elements into the array successfully.\n", size);
    for(int k = 0; k < size; k++){
        new_array[k-1] = array[k];
    }
    printf("Successfully removed first element.\n");
    printf("Now the array is : ");
    for(int n = 0; n < size - 1; n++){
        printf("%d\n", new_array[n]);
    }
    return 0;
}