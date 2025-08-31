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

ll firstValueRow(int i){
    return 1LL * i * (i - 1) / 2 + 1;
}

ll maxValue(int i){
    return 1LL * i * (i + 1) / 2;
}

int main() {
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll x, y, z;
    cin >> x >> y >> z;

    // Yêu cầu 1: Tìm giá trị tại ô (x, y)
    ll valueAtXY = firstValueRow(x) + y - 1;
    cout << valueAtXY << '\n';

    // Yêu cầu 2: Tìm hàng chứa giá trị z (dùng binary search)
    ll l = 1, r = 1e6, row = -1;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (firstValueRow(mid) <= z && z <= maxValue(mid)) {
            row = mid;
            break;
        } else if (maxValue(mid) < z) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    // Tìm cột của giá trị z trong hàng đã tìm được
    ll col = z - firstValueRow(row) + 1;
    cout << row << " " << col << '\n';

    return 0;
}

//_______________________________B23DCCN375_______________________________//
