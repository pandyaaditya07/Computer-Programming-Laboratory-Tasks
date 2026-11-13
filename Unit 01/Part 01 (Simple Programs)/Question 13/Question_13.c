//Question 13 : Convert bytes into KB, MB and GB.
#include <stdio.h>
int main(){
    float bytes;
    printf("Enter bytes : ");
    scanf("%f", & bytes);
    printf("Bytes : %.2f\nKilobytes (KB) : %.2f\nMegabytes (MB) : %.2f\nGigabytes (GB) : %.2f\n", bytes, bytes / 1024, bytes / (1024*1024), bytes / (1024*1024*1024) );
    return 0;
}