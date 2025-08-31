#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll &x : a) {
            cin >> x;
        }

        sort(a.begin(), a.end());
        ll dem = 0;

        for (int i = 0; i < n - 2; i++) {
            if (a[i] >= k) break;

            for (int j = i + 1; j < n - 1; j++) {
                auto it = lower_bound(a.begin() + j + 1, a.end(), k - a[i] - a[j]);
                dem += (it - (a.begin() + j + 1));
            }
        }

        cout << dem << "\n";
    }

    return 0;
}
