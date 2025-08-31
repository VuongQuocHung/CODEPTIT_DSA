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

int n, m, vao[1005], ra[1005];
vector<int> ke[1005];
vector<ii> canh;

void nhap(){
	cin >> n >> m;
	FOR(i, 1, m){
		int x, y; 
		cin >> x >> y;
		ra[x]++; vao[y]++;
	}
}

void reset(){
	memset(vao, 0, sizeof(vao));
	memset(ra, 0, sizeof(ra));
}
bool check(){
	FOR(i, 1, n){
		if(ra[i] != vao[i]) return false;
	}
	return true;
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
		reset();
		nhap();
		if(check()) cout << 1 << endl;
		else cout << 0 << endl;
	}

	return 0;
}
