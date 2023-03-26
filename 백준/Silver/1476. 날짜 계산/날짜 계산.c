#include <stdio.h>

int main() {
    int E, S, M ; 
    
    int ee=1;
    int ss=1;
    int mm=1; 
    
    int year=1 ; 
    
    scanf("%d %d %d", &E, &S, &M);
    
    while(1) {
        if(E==ee && S==ss && M==mm) break ;
        
        ee++;
        ss++;
        mm++;
        year++;
        
        if(ee>15) ee=1;
        if(ss>28) ss=1; 
        if(mm>19) mm=1; 
    }
    
    printf("%d", year);
    
    return 0;
}