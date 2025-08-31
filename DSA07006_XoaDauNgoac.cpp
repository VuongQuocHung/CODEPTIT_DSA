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

string solve(string &s){
	stack<int> st;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == ')'){
			string temp;
			while(!st.empty() && s[st.top()] != '('){
				temp = s[st.top()] + temp;
				st.pop();
			}
			st.pop();
			string str;
			for(int j = 0; j <= st.top(); j++){
				str.pb(s[j]);
			}
			str += temp;
		}
		else{
			st.push(s[i]);
		}
	}
}
int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	string s;
	cin >> s;
	cout << solve(s);

	return 0;
}
