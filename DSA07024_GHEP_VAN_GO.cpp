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

int n, a[1000005], trai[1000005], phai[1000005];

void ben_trai(){
	stack<int> st;
	for(int i = 1; i <= n; i++){
		while(!st.empty() && a[st.top()] >= a[i]) st.pop();
		if(st.empty()) trai[i] = 0;
		else trai[i] = st.top();
		st.push(i);
	}
}

void ben_phai(){
	stack<int> st;
	for(int i = n; i >= 1; i--){
		while(!st.empty() && a[st.top()] >= a[i]) st.pop();
		if(st.empty()) phai[i] = n + 1;
		else phai[i] = st.top();
		st.push(i);
	}
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
		cin >> n;
		FOR(i, 1, n) cin >> a[i];
		ben_phai(); ben_trai();
		int ans = 0;
		FOR(i, 1, n) if(a[i] <= phai[i] - trai[i] - 1) ans = max(ans, a[i]);
		cout << ans << endl;
	}

	return 0;
}
