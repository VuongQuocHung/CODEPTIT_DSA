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
	cin.ignore();
	while(t--){
		string s; cin >> s;
		stack<int> st;
		st.push(-1);
		int ans = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '(') st.push(i);
			else{
				// if(st.top() != -1 && s[st.top()] == '(' && s[i] == ')') cout << st.top() + 1 << ' ' << i + 1 << endl;
				st.pop();
				if(!st.empty()){
					ans = max(ans, i - st.top());
				}
				else st.push(i);
			}
		}
		cout << ans  << endl;
	}

	return 0;
}
