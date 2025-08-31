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

int n, w; // n món đồ và trọng lượn tối đa w
vector<ii> x;// first : trọng lượng, second : giá trị
vector<vi> f; // f[i][j] : giá trị lớn nhất với i món đồ và trọng lượng tối đa j
string x_opt;

void truy_vet(int n, int w){
	if(n == 0) return;
	if(f[n][w] == f[n - 1][w]) truy_vet(n - 1, w); // nếu ko lấy món đồ thứ n thì đệ quy
												  // đến món thứ n - 1
	else{
		truy_vet(n - 1, w - x[n].fi);
		x_opt[n - 1] = '1';
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n >> w;
	x.resize(n + 1);
	f.resize(n + 1, vector<int>(w + 1, 0));
	FOR(i, 1, n){
		cin >> x[i].se; // nhập vào giá trị của các món đồ
		x_opt.pb('0');
	}
	FOR(i, 1, n) cin >> x[i].fi; // nhập trọng lượng

	FOR(i, 1, n){ // duyệt qua n món đồ
		FOR(j, 0, w){ // xét từng giới hạn về trọng lượng 0, 1, ... w
			f[i][j] = f[i - 1][j];
			// nếu giới hạn trọng lượng lớn hơn trọng lượng của món đồ đang xét
			// tức là ta có thể nhét món đồ thứ i vào túi
			if(x[i].fi <= j) f[i][j] = max(f[i][j], f[i - 1][j - x[i].fi] + x[i].se);
		}
	}
	cout << f[n][w] << endl;
	truy_vet(n, w);
	for(char c : x_opt) cout << c << ' ';

	return 0;
}