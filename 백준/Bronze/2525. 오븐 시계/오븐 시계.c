#include <stdio.h>

int main() {
    int h, m, t ;
    scanf("%d %d", &h, &m);
    scanf("%d", &t);
    
    if ((m+t) >= 60){
        int x = (m+t) / 60;
        int y = (m+t) % 60;          
        if(h + x >= 24){
            h = h + x - 24 ;
            m = y ;
        }
        else {
            h = h + x;
            m = y;
        }
    }
    else if (m + t < 60) {
        m = m + t ;
    }
    printf("%d %d \n", h, m);
    
    return 0;
}