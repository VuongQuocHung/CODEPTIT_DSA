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

void Find(int a[], int n, int r[]){ 
// r[i] : chỉ số của phần tử đầu tiên bên phải > a[i]
	stack<int> st;
	for(int i = 0; i < n; i++){
		while(!st.empty() && a[i] > a[st.top()]){
			r[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		r[st.top()] = -1;
		st.pop();
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
		int n; cin >> n; int a[n], r[n];
		FOR(i, 0, n - 1) cin >> a[i];
		Find(a, n, r);
		FOR(i, 0, n - 1){
			if(r[i] != -1) cout << a[r[i]] << ' ';
			else cout << -1 << ' ';
		}
		cout << endl;
	}

	return 0;
}
