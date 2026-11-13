//Question 02 : Print 1st 10 odd nos.
#include <stdio.h>
int main(){
    for(int i = 1; i <= 20; i++){
        if(i % 2 == 0){
            continue;
        }
        else{
            printf("%d\n", i);
        }
    }
    return 0;
}