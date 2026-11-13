// Question 36 : Print the following series.
#include <stdio.h>
int main(){
    printf("Pattern : A\n");
    for(int i = 1, j = 5; i <= 5 && j >= 1; i++, j--){
        printf("%d %d\n", i, j);
    }
    return 0;
}