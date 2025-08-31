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
	stack<char> st;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == ']'){
			string temp;
			while(!st.empty() && st.top() != '['){
				temp = st.top() + temp;
				st.pop();
			}
			st.pop();
			string number;
			while(!st.empty() && isdigit(st.top())){
				number = st.top() + number;
				st.pop();
			}
			int i = 1;
			if(!number.empty()) i = stoi(number);
			string str;
			for(int j = 0; j < i; j++) str += temp;
			for(char &c : str) st.push(c); 
		}
		else{
			st.push(s[i]);
		}
	}
	string ans;
	while(!st.empty()){
		ans = st.top() + ans;
		st.pop();
	}
	return ans;
}

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
		string s;
		cin >> s;
		cout << solve(s) << endl;
	}

	return 0;
}
