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

const int MOD = 1000000007;

int eulerPartition(int n) {
   vector<ll> dp(n + 1, 0);
    dp[0] = 1;

    for (int k = 1; k <= n; ++k) {
        int pent1 = k * (3 * k - 1) / 2;
        int pent2 = k * (3 * k + 1) / 2;
        int sign = (k % 2 == 1) ? 1 : -1;

        for (int j = n; j >= pent1; --j) {
            dp[j] = (dp[j] + sign * dp[j - pent1]) % MOD;
            if (dp[j] < 0) dp[j] += MOD;
        }
        if (pent2 <= n) {
            for (int j = n; j >= pent2; --j) {
                dp[j] = (dp[j] + sign * dp[j - pent2]) % MOD;
                if (dp[j] < 0) dp[j] += MOD;
            }
        }
    }
    return dp[n];
}

int main() {
    faster();
    int n;
    cin >> n;
    cout << eulerPartition(n) << '\n';
    return 0;
}


//_______________________________B23DCCN375_______________________________//