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

int s, t, e, n;

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

int bfs(){
	if(s == e && t == n) return 0;
	queue<ii> Q;
	Q.push({s, t});
	int M[105][105] = {}; // lưu số bước ít nhất để đi từ ô (s, t) đến
	M[s][t] = 0;
	while(!Q.empty()){
		ii now = Q.front(); Q.pop();
		int x = now.fi, y = now.se;
		//cout << x << ' ' << y << endl;
		FOR(k, 0, 7){
			int xn = x + dx[k];
			int yn = y + dy[k];
			if(xn >= 1 && xn <= 8 && yn >= 1 && yn <= 8 && !M[xn][yn]){
				M[xn][yn] = M[x][y] + 1;
				if(xn == e && yn == n) return M[xn][yn];
				Q.push({xn, yn});
			}
		}
	}
	return -1;
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
		string st, en;
		cin >> st >> en;
		string str = "abcdefgh";
		for(int i = 0; i < str.size(); i++){
			if(str[i] == st[0]) s = i + 1;
			if(str[i] == en[0]) e = i + 1;
		}
		t = st[1] - '0'; n = en[1] - '0';
		cout << bfs() << endl;
	}

	return 0;
}
