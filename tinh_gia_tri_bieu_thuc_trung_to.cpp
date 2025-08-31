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

int calc(char o1, char o2, char op){
	if(op == '+') return o1 + o2;
	if(op == '-') return o1 - o2;
	if(op == '*') return o1 * o2;
	if(op == '/') return o1 / o2;
	return 0;
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
		string s; cin >> s;
		stack<int> st;
		int n = s.size() - 1;
		for(int i = n; i >= 0; i--){
			if(isdigit(s[i]))
				st.push(s[i] - '0');
			else{
				int o1 = st.top(); st.pop();
				int o2 = st.top(); st.pop();
				st.push(calc(o1, o2, s[i]));
			}
		}
		cout << st.top() << endl;
	}

	return 0;
}
