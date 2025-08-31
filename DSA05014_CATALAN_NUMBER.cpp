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

// so catalan = 2n!/(n + 1! * n!)

string operator * (string a, int b){
	if(a == "0" || b == 0) return "0";
	int n = a.length();
	string res(n, '0');
	int nho = 0;
	for(int i = n - 1; i >= 0; i--){
		int nhan = (a[i] - '0') * b + nho;
		nho = nhan / 10;
		res[i] = nhan % 10 + '0';
	}
	if(nho > 0) res = to_string(nho) + res;
	return res;
}

string Natalan(int n){
	vector<int> tu_so;
	FOR(i, n + 2, 2 * n) tu_so.pb(i);
	FOR(i, 2, n){
		int x = i;
		for(int j = 0; j < tu_so.size(); j++){
			int d = __gcd(tu_so[j], x);
			x /= d;
			tu_so[j] /= d;
			if(x <= 1) break;
		}
	}
	string res = "1";
	for(int x : tu_so) res = res * x;
	return res;
}

vector<string> c;
void init(){
	c.pb("1");
	FOR(i, 1, 100) c.pb(Natalan(i));
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	init();
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		cout << c[n] << endl;
	}

	return 0;
}

