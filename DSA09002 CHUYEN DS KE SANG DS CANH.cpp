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

vector<string> ke(1005);

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	vector<ii> canh;
	int n; cin >> n;  
	cin.ignore();
	FOR(i, 1, n){
		getline(cin, ke[i]);
		stringstream ss(ke[i]);
		string s;
		while(ss >> s){
			int x = stoi(s);
			if(i < x){
				canh.pb({i, x});
			}
		}
	}
	for(ii c : canh){
		cout << c.fi << ' ' << c.se << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//