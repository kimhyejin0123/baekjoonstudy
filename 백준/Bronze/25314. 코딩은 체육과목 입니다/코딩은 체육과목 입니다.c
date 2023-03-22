#include <stdio.h>

int main() {
    int N, i, ln;
    
    scanf("%d \n", &N);
    ln = N/4 ;
    
    for (i=0; i<ln; i++){
        printf("long ");
    }
    
    printf("int \n");
    return 0;
}