//Question 20 : Print sum of all integers from 1 to 100, which are divisible by 3.
#include <stdio.h>
int main(){
    int sum = 0;
    for(int i = 1; i <= 100; i++){
        if (i % 3 == 0){
            sum += i;
        }
    }
    printf("Sum = %d\n", sum);
    return 0;
}