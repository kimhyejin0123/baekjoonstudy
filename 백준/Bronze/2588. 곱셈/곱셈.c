#include <stdio.h> 

int main() { 
    int x1, x2, a, b, c ;
    
    scanf("%d \n", &x1); //472
    scanf("%d \n", &x2); /* 385 */
    
    a= (x2%100)%10;     /*1의 자리수 5*/
    b= (x2%100)/10;     /*10의 자리수8*/
    c= x2/100;     /*100의 자리수 3*/
    
    printf("%d \n", x1*a);
    printf("%d \n", x1*b);
    printf("%d \n", x1*c);
    printf("%d \n", (x1*a+x1*b*10+x1*c*100));
   
    return 0; 
}