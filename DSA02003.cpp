#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define fspr fixed << setprecision
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define _Vuong_Quoc_Hung_ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, a[1005][1005];
void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];
}

string path = "";
int found = 0;
void Try(int i, int j){
	// Kiểm tra xem ô đầu có đi được không
	if(i == 1 && j == 1 && a[i][j] == 0)
		return;
	// nếu đi được đến ô (n, n) thì in ra đường đi
	if(i == n && j == n){
		cout << path << ' ';
		found = 1;
		return;
	}
	// xét ô bên dưới
	if(i + 1 <= n && a[i + 1][j]){
		path.pb('D');
		Try(i + 1, j);
		path.pop_back();
	}
	// xét ô bên phải
	if(j + 1 <= n && a[i][j + 1]){
		path.pb('R');
		Try(i, j + 1);
		path.pop_back();
	}
}

int main(){
	_Vuong_Quoc_Hung_
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		nhap();
		Try(1, 1);
		if(!found)
			cout << -1 << '\n';
		cout << '\n';
		path = "";
		found = 0;
	}
	
	return 0;
}