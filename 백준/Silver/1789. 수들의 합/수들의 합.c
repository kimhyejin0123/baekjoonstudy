#include <stdio.h>

int main() {
    long long int S , N ;
    long long int sum = 0 ;
    int count = 1 ;
    int i =1 ; 
    
    scanf("%lld", &S) ;
    
    if (S == 1) printf("1");
    else {
        while(sum<=S){ //1부터 sum을 구해서 이 sum이 S보다 작거나 같을 때 
            sum += i++ ;
            count++;
        }
        printf("%d", count-2); 
    }
    
    return 0;
}