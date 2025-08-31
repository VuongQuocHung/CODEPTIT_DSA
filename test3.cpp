#include <bits/stdc++.h>
using namespace std;

int knapsack(int C, vector<int>& w, int N) {
    vector<int> dp(C + 1, 0);
    
    // for (int i = 0; i < N; i++) {
    //     for (int j = C; j >= w[i]; j--) {
    //         dp[j] = max(dp[j], dp[j - w[i]] + w[i]);
    //     }
    // }
    for(int i = 1; i <= C; i++){
        for(int x : w){
            if(i >= x) dp[i] = max(dp[i - x] + x, dp[i]);
        }
    }
    for(int i = 1; i <= C; i++){
        cout << i << ' ' << dp[i] << endl;
    }
    return dp[C];
}
int main() {
    int C, N;
    cin >> C >> N;
    vector<int> w(N);
    for (int i = 0; i < N; i++) {
        cin >> w[i];
    }
    cout << knapsack(C, w, N) << endl;
    return 0;
}
