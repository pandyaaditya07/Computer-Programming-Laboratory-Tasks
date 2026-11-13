//Question 02 : Print 1st 10 even nos.
#include <stdio.h>
int main(){
    for(int i = 1; i <= 20; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
        else{
            continue;
        }
    }
    return 0;
}