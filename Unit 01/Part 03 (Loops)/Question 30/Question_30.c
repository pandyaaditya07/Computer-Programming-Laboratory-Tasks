//Question 30 : Find out all prime nos. between 1 and 500.
#include <stdio.h>
int main(){
    printf("Prime numbers between 1 and 500 are:\n");
    for(int n = 1; n <= 500; n++){
        if (n <= 1) {
            continue; 
        }
        int is_prime = 1; 
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                is_prime = 0; 
                break;        
            }
        }
        if(is_prime == 1){
            printf("%d ", n);
        }
    }
    printf("\n");
    return 0;
}