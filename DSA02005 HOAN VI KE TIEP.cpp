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

string s;
int n, a[1005], x[1005];
bool visited[1005];
void in(){
	for(int i = 1; i <= s.size(); i++)
		cout << (char)x[i];
	cout << ' ';
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!visited[j]){
			visited[j] = 1;
			x[i] = a[j];
			if(i == n)
				in();
			else
				Try(i + 1);
			visited[j] = 0;
		}
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
	cin.ignore();
	while(t--){
		cin >> s;
		n = s.size();
		FOR(i, 1, n) a[i] = (int)s[i - 1];
		Try(1);
		cout << '\n';
	}
	
	return 0;
} 