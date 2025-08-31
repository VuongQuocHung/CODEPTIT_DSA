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

int n, a[20];
vector<string> ans;

void Try(int i, int sum, string s){
	FORD(k, i, 1){
		if(sum == n){
			s.pop_back();
			ans.pb("(" + s + ")");
			return;
		}else if(sum < n)
			Try(k, sum + k, s + to_string(k) + " ");
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
		cin >> n;
		Try(n, 0, "");
		cout << ans.size() << '\n';
		for(string s : ans) cout << s << ' ';
		cout << "\n";
		ans.clear();
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//

//_______________________THANKS_FOR_READING_MY_CODE_______________________//