#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, a[50]; // Tăng kích thước mảng
vector<string> ans;

void Try(int i, int sum, int start) {
    FOR(j, start, n) {
        a[i] = j;
        sum += a[i];

        if (sum == n) {
            stringstream ss;
            FOR(k, 1, i) ss << a[k] << ' ';
            string tmp = ss.str();
            tmp.pop_back(); // Xóa dấu cách cuối
            ans.pb("(" + tmp + ")");
        } else if (sum < n) {
            Try(i + 1, sum, j);
        }

        sum -= j;
    }
}

int main() {
    faster();
    
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        Try(1, 0, 1);
        sort(all(ans), cmp);
        for (const auto &s : ans) cout << s << ' ';
        cout << '\n';
        ans.clear();
    }

    return 0;
}
