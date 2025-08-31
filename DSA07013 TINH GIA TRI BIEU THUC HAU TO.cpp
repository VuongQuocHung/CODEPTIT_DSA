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

ll calc(ll a, ll b, char c){
	if(c == '+') return a + b;
	if(c == '*') return a * b;
	if(c == '/') return a / b;
	if(c == '-') return a - b;
}

int main(){
	faster();
	
	int t; cin >> t;
	while(t--){
		string s; 
		cin >> s;
		stack<ll> st;
		for(char c : s){
			if(isdigit(c)) st.push(c - '0');
			else{
				ll x = st.top(); st.pop();
				ll y = st.top(); st.pop();
				st.push(calc(y, x, c));
			}
		}
		cout << st.top() << endl;
	}

	return 0;
}