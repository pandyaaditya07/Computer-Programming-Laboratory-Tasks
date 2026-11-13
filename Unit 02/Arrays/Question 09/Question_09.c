//Question 9 :	Reverse the array of maximum 5 elements.
#include <stdio.h>
int main(){
    int array[5], reverse_array[5], reverse_index = 0;
    printf("Enter 5 elements : \n");
    for(int i = 0; i < 5; i++){
        printf("Enter element %d : ", i + 1);
        scanf("%d", & array[i]);
    }
    for(int j = 4; j >= 0; j--){
        reverse_array[reverse_index] = array[j];
        reverse_index++;
    }
    for (int k = 0; k < 5; k++){
        printf("%d\n", reverse_array[k]);
    }
    return 0;
}