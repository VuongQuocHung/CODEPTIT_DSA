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

string convert_from_dec_to_k(int n, int k){
	string ans = "";
	while(n > 0){
		ans = to_string(n % k) + ans;
		n /= k;
	}
	return ans;
}

int convert_to_dec(string n, int k){
	int ans = 0;
	for(char &c : n){
		ans = ans * k + c - '0';
	}
	return ans;
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
		int k; cin >> k;
		string a, b; cin >> a >> b;
		int x = convert_to_dec(a, k), y = convert_to_dec(b, k);
		int z = x  + y;
		cout << convert_from_dec_to_k(z, k) << endl;
	}

	return 0;
}
