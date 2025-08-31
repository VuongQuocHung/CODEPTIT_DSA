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

void Giai_MA(string s){
	int n = s.size();
	stack<int> st1;
	stack<char> st2;
	int cnt = 0; // số lần lặp chuỗi con
	string ans = "";
	FORD(i, n - 1, 0){
		if(s[i] == ']'){
			st1.push(i);
			if(!st2.empty() && cnt != 0){
				string temp = "";
				while(!st2.empty()){
					temp.pb(st2.top());
					st2.pop();
				}
				while(cnt--) ans += temp;
			}
		}
		else{
			if(s[i] == '[') st1.pop();
			else if(isdigit(s[i])){
				cnt = cnt * 10 + s[i] - '0';
			}
			else{
				st2.push(s[i]);
			}
		}
	}
	cout << ans << endl;
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
		string s;
		cin >> s;
		Giai_MA(s);
	}

	return 0;
}
