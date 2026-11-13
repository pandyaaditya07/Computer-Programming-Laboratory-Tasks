/*
Question 33 : Check whether a given no. is automorphic no. or not.
Automorphic nos. are the nos. whose last digit(s) of square of any 
no=no itself. e.g. 5-25,6-36,25-625
*/
#include <stdio.h>
int main(){
    int user, last_digit_of_square_of_user, square_of_user;
    printf("Enter a number : ");
    scanf("%d", & user);
    square_of_user = user * user;
    last_digit_of_square_of_user = square_of_user % 10;
    printf("Last digit : %d\nSquare of number : %d\n", last_digit_of_square_of_user, square_of_user);
    if (last_digit_of_square_of_user == user){
        printf("It is an automorphic number.\n");
    }
    else{
        printf("It's not an automorphic number.\n");
    }
    return 0;
}