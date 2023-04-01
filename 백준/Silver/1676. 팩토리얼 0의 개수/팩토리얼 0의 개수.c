#include <stdio.h>
int main() {
    
    int count=0 ;
    int N, i ; 
    
    scanf("%d", &N);
    
    if (N==0){
        printf("0 \n");
    }
    else { //0의 개수를 세기 위해서 10의 소인수인 5를 이용한다. 
        for (i=1; i<=N; ++i){
            if (i%5 ==0)  //5로 나눠질 경우 
                count++;
            if (i%25 ==0) //25로 나눠질 경우에도 
                count++;
            if (i%125 == 0)
                count++;
        }
      
     printf("%d", count);
    }
    
    
    return 0; 
}