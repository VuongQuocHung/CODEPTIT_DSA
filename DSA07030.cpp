#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define MAXN 1005

int n, m;
int a[MAXN][MAXN];      // Ma trận đầu vào
int h[MAXN];            // Histogram cho từng dòng


ll maxHistArea(int h[], int m) {
    stack<int> st;
    ll max_area = 0;
    int i = 0;
    while (i < m) {
        if (st.empty() || h[st.top()] <= h[i]) {
            st.push(i++);
        } else {
            int top = st.top(); st.pop();
            ll width = st.empty() ? i : i - st.top() - 1;
            ll area = 1LL * h[top] * width;
            max_area = max(max_area, area);
        }
    }
    while (!st.empty()) {
        int top = st.top(); st.pop();
        ll width = st.empty() ? i : i - st.top() - 1;
        ll area = 1LL * h[top] * width;
        max_area = max(max_area, area);
    }
    return max_area;
}

int main() {
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    

    int T;
    cin >> T;
    while(T--){
        cin >> n >> m;
        FOR(i, 0, n - 1)
        FOR(j, 0, m - 1)
        cin >> a[i][j];

        ll res = 0;
        memset(h, 0, sizeof(h));
        FOR(i, 0, n - 1) {
            FOR(j, 0, m - 1) {
                if (a[i][j] == 0) h[j] = 0;
                else h[j] += 1;
            }
            FOR(j, 0, m - 1) cout << h[j] << ' ';
            cout << endl;
            res = max(res, maxHistArea(h, m));
        }
        cout << endl;

        cout << res << "\n";
    }
    return 0;
}
