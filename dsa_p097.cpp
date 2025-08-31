#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define ll long long
#define vi vector<int>
#define ii pair<ll, ll> // Sử dụng long long cho tọa độ
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

ll xA, xB, yA, yB; // Sử dụng long long vì tọa độ <= 10^9

unordered_map<ll, vector<ii>> mp;

ll dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
ll dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool check(ll x, ll y) {
    if (mp.find(x) == mp.end()) return false;
    for (auto it : mp[x]) {
        if (y >= it.fi && y <= it.se) return true;
    }
    return false;
}

ll bfs() {
    if (xA == xB && yA == yB) return 0;
    queue<ii> Q;
    map<ii, ll> visited; // Lưu số bước
    Q.push({xA, yA});
    visited[{xA, yA}] = 0;
    while (!Q.empty()) {
        ii now = Q.front(); Q.pop();
        ll x = now.fi, y = now.se;
        FOR(k, 0, 7) {
            ll xn = x + dx[k], yn = y + dy[k]; // Sửa lỗi: dùng dx cho x, dy cho y
            if (xn >= 0 && xn <= 1e9 && yn >= 0 && yn <= 1e9 
                && visited.find({xn, yn}) == visited.end() && check(xn, yn)) {
                visited[{xn, yn}] = visited[{x, y}] + 1;
                if (xn == xB && yn == yB) return visited[{xn, yn}];
                Q.push({xn, yn});
            }
        }
    }
    return -1; // Input đảm bảo có đường đi, nên trường hợp này không xảy ra
}

int main() {
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int T;
    cin >> T;
    while (T--) {
        mp.clear();
        cin >> xA >> yA >> xB >> yB;
        int n; cin >> n;
        while (n--) {
            ll x, y1, y2;
            cin >> x >> y1 >> y2;
            mp[x].pb({y1, y2});
        }
        cout << bfs() << endl;
    }

    return 0;
}