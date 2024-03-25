#include <stdio.h>

int main() {
    int X, N, a, b, i ;
    int total = 0;
    
    scanf("%lld \n", &X);
    scanf("%d \n", &N) ;
    
    for (i=0; i < N; ++i){
        scanf("%d %d \n", &a, &b);
        total= total + a*b ;
    }
    
    if (total == X) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    
    return 0;
}