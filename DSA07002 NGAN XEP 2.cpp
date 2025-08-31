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

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	stack<int> st;
	int t;
	cin >> t;
	while(t--){
		string s; cin >> s;
		if(s == "PUSH"){
			int x; cin >> x;
			st.push(x);
		}
		else if(s == "POP" && !st.empty()){
			st.pop();
		}
		else if(s == "PRINT"){
			if(st.empty()) cout << "NONE\n";
			else cout << st.top() << endl;
		}
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//