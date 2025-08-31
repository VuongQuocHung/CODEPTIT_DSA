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

/************************ MADE BY VƯƠNG QUỐC HƯNG ************************/

int n, c[105][105], c_min = 1e9; 
ll fopt = 1e9, dp[105][105];
int X[1005], visited[105];

void Try(int k, ll cur_cost){
	// cout << "k = " << k << endl;
	// cout << "Duong di hien tai la : ";
	// FOR(i, 1, k - 1) cout << X[i] << ' ';
	// cout << "\nChi phi hien tai la : " << cur_cost << endl;
	ll limit = cur_cost + (n - k + 1) * c_min; // cận dưới
	if(limit >= fopt) return;
	if(cur_cost >= fopt) return;
	if(k == n + 1){
		fopt = min(fopt, cur_cost);
		return;
	}
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			visited[i] = 1;
			X[k] = i;
			Try(k + 1, cur_cost + c[X[k - 1]][X[k]]);
			visited[i] = 0;
		}
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		memset(visited, 0, sizeof(visited));
        memset(X, 0, sizeof(X));
        fopt = c_min = 1e9;

		cin >> n;
		FOR(i, 1, n){
			FOR(j, 1, n){ 
				cin >> c[i][j];
				if(i != j) c_min = min(c_min, c[i][j]);
			}
		}
		ll best_cost = 1e9;
		FOR(i, 1, n){
            // Đặt thành phố xuất phát
            memset(visited, 0, sizeof(visited));
            X[1] = i;
            visited[i] = 1;

            // Gọi hàm Try
            Try(2, 0);

            // Cập nhật chi phí tốt nhất
            best_cost = min(best_cost, fopt);
        }
        cout << best_cost << endl;
	}

	return 0;
}
