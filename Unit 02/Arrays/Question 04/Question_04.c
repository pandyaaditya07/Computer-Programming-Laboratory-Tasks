/*
Question 04 : Print minimum no. of notes required. Notes given are 1, 2, 5, 10, 20, 50, 100, 200 & 500.
e.g if value is 1256, then answer is 2 notes of 500 Rs., 1 note of 200 Rs., 1 note of 50 Rs., 1 note of 5 Rs., 
and 1 note of 1 Rupee.
*/
#include <stdio.h>
int main(){
    int amount;
    printf("Enter the amount : ");
    scanf("%d", &amount);
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int total_denominations = 9;
    printf("\nMinimum notes required :\n");
    for(int i = 0; i < total_denominations; i++){
        if(amount >= notes[i]){
            int count = amount / notes[i];
            printf("%d note(s) of %d Rs.\n", count, notes[i]);
            amount %= notes[i];
        }
    }  
    return 0;
}