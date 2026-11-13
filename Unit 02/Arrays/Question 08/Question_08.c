//Question 08 :	Copy one array of 5 elements to another array of 10 elements skipping one element.
#include <stdio.h>
int main(){
    int array_1[5], array_2[10] = {0}; 
    int num = 0; 
    printf("Enter 5 elements : \n");
    for(int i = 0; i < 5; i++){
        printf("Enter element %d : ", i + 1);
        scanf("%d", &array_1[i]);
    }
    for(int j = 0; j < 5; j++){
        array_2[num] = array_1[j];
        num += 2;                  
    }    
    printf("\nThe second array : \n\n");
    for(int k = 0; k < 10; k++){
        printf("%d\n", array_2[k]);
    }    
    return 0;
}