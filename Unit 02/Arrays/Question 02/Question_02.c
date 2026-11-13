//Question 02 : Accept 10 values and print 4th, 7th and 9th value.
#include <stdio.h>
int main(){
    int array[10];
    printf("Enter 10 values : \n");
    for (int i = 0; i < 10; i++){
        printf("Enter number %d : ", i + 1);
        scanf("%d", & array[i]);
    }
    printf("4th value : %d\n7th value : %d\n9th value : %d\n", array[3], array[6], array[8]);
    return 0;
}