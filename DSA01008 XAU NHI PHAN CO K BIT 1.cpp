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

int n, k;
string xau;

void init(){
	FOR(i, 1, n){
		xau.pb('0');
	}
}

void sinh(){
	while(1){
		int cnt = 0;
		for(char &ch : xau){
			if(ch == '1') ++cnt;
			if(cnt > k) break;
		}
		if(cnt == k) cout << xau << '\n';

		int i = n - 1;
		while(i >= 0 && xau[i] != '0') --i;
		if(i == -1) break;

		xau[i] = '1';

		for(int j = i + 1; j < n; j++)
			xau[j] = '0'; 
	}
	xau = "";
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		init();
		sinh();
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//