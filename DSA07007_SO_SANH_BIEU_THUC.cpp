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

string chuyen_doi(string s){
	stack<char> st;
	for(char c : s){
		if(c != ')') st.push(c);
		else{
			string tmp;
			while(!st.empty() && st.top() != '('){
				tmp = st.top() + tmp;
				st.pop();
			}
			st.pop();
			char dau;
			if(!st.empty()) dau = st.top();
			for(char ch : tmp){
				if(dau == '-' && !st.empty()){
					if(ch == '-') st.push('+');
					else if(ch == '+') st.push('-');
					else st.push(ch);
				}
				else st.push(ch);
			}
		}
	}
	string ans;
	while(!st.empty()){
		ans.pb(st.top());
		st.pop();
	}
	reverse(all(ans));
	return ans;
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
		string p1, p2;
		cin >> p1 >> p2;
		if(chuyen_doi(p1) == chuyen_doi(p2)) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
