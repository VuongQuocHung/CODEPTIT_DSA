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

stack<int> st;
vector<ii> matches;

bool solve(string s){
	int n = s.size();
	for(int i = 0; i < n; i++){
		if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
			st.push(i);
		}
		else{
			if(st.empty()) return false;
			if(s[i] == ')' && s[st.top()] == '('){ 
				matches.pb({st.top(), i});
				st.pop();
			}
			else if(s[i] == ']' && s[st.top()] == '['){
				matches.pb({st.top(), i}); 
				st.pop();
			}
			else if(s[i] == '}' && s[st.top()] == '{'){
				matches.pb({st.top(), i}); 
				st.pop();
			}
		}
	}
	if(!st.empty()) 
		return false;
	return true;
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
		string s; cin >> s;
		if(solve(s)){
			for(ii x : matches)
				cout << x.fi << ' ' << x.se << endl;
			cout << "YES\n";
		}
		else cout << "NO\n";
		while(!st.empty()) st.pop();
		matches.clear();
		cout << endl;
	}

	return 0;
}
