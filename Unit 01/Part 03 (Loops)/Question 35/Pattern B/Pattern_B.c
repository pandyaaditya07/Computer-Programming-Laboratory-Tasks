// Question 35 : Print the following series.
#include <stdio.h>
int main(){
    printf("Pattern : B\n");
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= i; j++){
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}
