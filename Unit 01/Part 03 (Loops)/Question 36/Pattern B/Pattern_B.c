// Question 36 : Print the following series.
#include <stdio.h>
int main(){
    printf("Pattern : B\n");
    for(int i = 1, j = 5; i <= 3 && j >= 3; ){
        printf("%d %d\n", i, j);
        printf("%d %d\n", i, j);
        i++;
        j--;
    }
    return 0;
}