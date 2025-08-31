#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define fspr fixed << setprecision
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define _Vuong_Quoc_Hung_ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, k;
set<string> mySet;
vector<string> v;
int a[105];

void nhap(){
	cin >> n >> k;
	string s;
	FOR(i, 1, n){
		cin >> s; 
		mySet.insert(s);
	}
	for(auto str : mySet){
		v.pb(str);
	}
}

void in(){
	FOR(i, 1, k){
		cout << v[a[i] - 1] << ' ';
	}
	cout << '\n';
}

void Try(int i){
	for(int j = a[i - 1] + 1; j <= v.size() - k + i; j++){
		a[i] = j;
		if(i == k) in();
		else Try(i + 1);
	}
}
int main(){
	_Vuong_Quoc_Hung_
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	nhap();
	Try(1);
	
	return 0;
}