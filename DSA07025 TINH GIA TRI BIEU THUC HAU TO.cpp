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

vector<string> tach_thanh_vector(string s){
	vector<string> ans;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp) ans.pb(tmp);
	return ans;
}

ll calc(ll x, ll y, string s){
	if(s == "+") return x + y;
	if(s == "-") return x - y;
	if(s == "*") return x * y;
	return x / y;
}

void solve(vector<string> hau_to){
	stack<ll> st;
	for(auto s : hau_to){
		if(isdigit(s[0]) || (s[0] == '-' && isdigit(s[1]))){
			ll x = stoll(s);
			st.push(x);
		}
		else{
			ll o1 = st.top(); st.pop();
			ll o2 = st.top(); st.pop();
			//cout << o2 << ' ' << o1 << ' ' << s << ' ' ;
			//cout << calc(o2, o1, s) << endl;
			st.push(calc(o2, o1, s));
		}
	}
	cout << st.top() << endl;
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
		int n; cin >> n; cin.ignore();
		string s; getline(cin, s);
		vector<string> hau_to = tach_thanh_vector(s);
		solve(hau_to);
	}

	return 0;
}
