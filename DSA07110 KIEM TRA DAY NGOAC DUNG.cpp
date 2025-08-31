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
		stack<char> st;
		for(char c : s){
			if(c == '(' || c == '[' || c == '{')
				st.push(c);
			else{
				if(!st.empty()){
					if(c == ')' && st.top() == '(') st.pop();
					else if(c == ']' && st.top() == '[') st.pop();
					else if(c == '}' && st.top() == '{') st.pop();
				}
				// else st.push(c);
			}
		}
		if(st.empty()) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}
