#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, a ;
    int answer = 0;

    int dp[1001];
    vector<int> A;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a;
        A.push_back(a);
        int dp_max = 0;

        for (int j = 0; j < A.size(); j++) {
            if (A[i] > A[j]) {
                if (dp_max < dp[j])
                    dp_max = dp[j];
            }
        }
        dp[i] = dp_max + 1;
        answer = max(answer, dp[i]);
    }

    cout << answer ;

    return 0;
}