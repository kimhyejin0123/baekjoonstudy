#include <stdio.h>

int main() {
    int H, M, x, y ;
    scanf("%d %d", &H, &M);
    
    if (M<45) { //if M=10 
        int i= 45- M ; //35
        x= 60 -i ;
        if (H ==0) {
            y=23 ;
        }
        else {
            y= (H-1); 
        }
    }
    else {
        y=H;
        x= M-45 ;   
        
    }
    
    printf("%d %d", y, x);
    
    return 0;
        
}