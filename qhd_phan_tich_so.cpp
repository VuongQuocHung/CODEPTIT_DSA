#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

//____________________________VƯƠNG_QUỐC_HƯNG____________________________//

const int INF = 1e9;
const int MAX_N = 100000;
vector<int> dp(100005, INF); // dp[i] lưu số phần tử ít nhất để tạo ra i
vector<int> parent(100005, -1); // parent[i] là số được chọn cuối cùng để tạo ra i

int main(){
    faster();
    
    int t; 
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> X(k + 1);

        for (int i = 1; i <= k; i++) cin >> X[i];

        dp[0] = 0;

        // for (int i = 1; i <= n; i++) {
        //     for (int x : X) {
        //         if (i >= x && dp[i - x] + 1 < dp[i]){ 
        //             // dp[i] = min(dp[i], dp[i - x] + 1);
        //             dp[i] = dp[i - x] + 1;
        //             parent[i] = x;
        //         }
        //     }
        // }
        for(int i = 0; i <= n; i++){
            for(int j = 1; j <= k; j++){
                if(dp[i] != INF){
                    if(dp[i + X[j]] > dp[i] + 1){
                        dp[i + X[j]] = dp[i] + 1;
                        parent[i + X[j]] = X[j];
                    }
                }
            }
        }
        
        if (dp[n] == INF) cout << -1 << '\n';
        else{
            cout << dp[n] << '\n';
            vector<int> res;
            int tmp = n;
            while(tmp > 0){
                res.pb(parent[tmp]);
                tmp -= parent[tmp];
            }
            sort(res.begin(), res.end());
            for(int i : res) cout << i << ' ';
        }
    }

    return 0;
}

//_______________________________B23DCCN375_______________________________//
