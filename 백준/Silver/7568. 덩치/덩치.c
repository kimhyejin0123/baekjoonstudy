#include <stdio.h>

int main(){
    int N,i,j,k;
    
    int x[50][2];
    
    scanf("%d", &N);
    
    for(i=0; i<N; i++)
        scanf("%d %d", &x[i][0], &x[i][1]);
    
    for(i=0; i<N; i++){
        k=0;
        for(j=0; j<N; j++){
            if(x[i][0]<x[j][0] && x[i][1]<x[j][1])
                k++;
        }
        printf("%d ", ++k);
    }
    return 0;
}