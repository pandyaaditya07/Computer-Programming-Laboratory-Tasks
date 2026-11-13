//Question 25 : Check whether a given no. is palindrome number or not. e.g. 12321
#include <stdio.h>
int main(){
    int user, remainder, reversed = 0, original_number;    
    printf("Enter a number : ");
    scanf("%d", &user);    
    original_number = user;  
    while(user > 0){
        remainder = user % 10;                  
        reversed = (reversed * 10) + remainder; 
        user = user / 10;                       
    }    
    if(reversed == original_number){
        printf("It's a palindrome number.\n");
    }
    else{
        printf("It's not a palindrome number.\n");
    }    
    return 0;
}