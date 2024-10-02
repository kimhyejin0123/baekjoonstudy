#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long N, M, low, high, sum, cut, max = 0 ; //int가 아니라 long long으로 해라
    int trees[10000001];

    cin >> N >> M ;
    for (int i=0; i<N; i++){
        cin >> trees[i] ;
    }
    sort(trees, trees+N);

    low = 0;
    high = trees[N-1];

    while(low <= high){ //cut 가능할 때 까지
        sum = 0;
        cut = (low + high) / 2;

        for(int i = 0; i < N; i++) {
            if(trees[i] - cut > 0) {
                sum += trees[i] - cut; // cut 하고 남는 게 있다면 가져감
            }
        }

        if(sum >= M){ // m미터보다 가져간 나무가 같거나 많으면
            if(cut > max){
                max = cut; // 현재 cut 지점을 최대 지점으로 저장
            }
            low = cut + 1; // cut 가능 구간을 더 올림
        }
        else{
            high = cut - 1; // m미터가 안 되면 cut 가능 구간을 내림
        }
    }
    cout << max ;
    return 0 ;
}