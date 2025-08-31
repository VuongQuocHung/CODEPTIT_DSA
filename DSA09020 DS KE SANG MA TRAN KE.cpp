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

//____________________________VƯƠNG_QUỐC_HƯNG____________________________//

int a[1005][1005];

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	cin >> n;
	cin.ignore();
	string s;
	FOR(i, 1, n){
		getline(cin, s);
		stringstream ss(s);
		while(ss >> s){
			a[i][stoi(s)] = 1;
		}
	}
	FOR(i, 1, n){
		FOR(j, 1, n) cout << a[i][j] << ' ';
		cout << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//