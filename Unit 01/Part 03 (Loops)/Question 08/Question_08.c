// Question 08 : Print sum of 1st n odd numbers.
#include <stdio.h>
int main(){
    int sum = 0, n;    
    printf("Enter a number (n) : ");
    scanf("%d", &n);    
    if(n <= 0){
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
    for(int i = 1; i <= n; i++){
        int odd_num = 2 * i - 1;
        sum = sum + odd_num;     
    }    
    printf("Sum of the first %d odd numbers is : %d\n", n, sum);    
    return 0;
}