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

int n;
string s;
vector<string> ans;

void Try(int i, string tmp){
	if(!tmp.empty())
		ans.pb(tmp);
	for(int j = i; j < n; j++){
		Try(j + 1, tmp + s[j]);
	}
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
		cin >> n >> s;
		Try(0, "");
		sort(all(ans));
		for(auto v : ans)
			cout << v << ' ';
		cout << '\n';
		ans.clear();
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//