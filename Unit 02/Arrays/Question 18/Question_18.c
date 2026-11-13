//Question 18 :	Delete a value from the array.
#include <stdio.h>
int main(){
    int size, target, index_of_target; 
    printf("Enter the size of the array : ");
    scanf("%d", & size);
    int array[size], new_array[size - 1];
    for(int i = 0; i < size - 1; i++){
        new_array[i] = 0;
    }
    printf("Array created successfully of size %d.\n", size);
    printf("Enter %d elements in the array.\n", size);
    for(int i = 0; i < size; i++){
        printf("Enter element %d : ", i + 1);
        scanf("%d", &  array[i]);
    }
    printf("Entered %d elements into the array.\n", size);
    printf("Here's the array : \n");
    for(int i = 0; i < size; i++){
        printf("%d\n", array[i]);
    }
    printf("Which element you want to delete from it : ");
    scanf("%d", & target);
    for(int i = 0; i < size; i++){
        new_array[i] = array[i];
    }
    for(int i = 0; i < size; i++){
        if (new_array[i] == target){
            index_of_target = i;
        }
    }
    for(int i = index_of_target; i < size - 1; i++){
        new_array[i] = array[i + 1];
    }
    printf("After deletion of %d, the new array is : \n", target);
    for(int i = 0; i < size - 1; i++){
        printf("%d\n", new_array[i]);
    }
    return 0;
}