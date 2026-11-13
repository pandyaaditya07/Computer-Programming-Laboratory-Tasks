//Question 17 :	Delete a value from the last position.
#include <stdio.h>
int main(){
    int size;
    printf("What should be the size of array : ");
    scanf("%d", & size);
    int array[size], new_array[size-1];
    for(int i = 0; i < size - 1; i++){
        new_array[i] = 0;
    }
    printf("Created the array successfully.\n");
    printf("Enter %d elements into the array.\n", size);
    for(int n = 0; n < size; n++){
        printf("Enter element %d : ", n + 1);
        scanf("%d", & array[n]);
    }
    for(int j = 0; j < size; j++){
        new_array[j] = array[j];
    }
    printf("After removing the last number, the array is : \n");
    for(int k = 0; k < size-1; k++){
        printf("%d\n", new_array[k]);
    }
    return 0;
}