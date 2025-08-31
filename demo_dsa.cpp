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

int LIS_length(vector<int> &a){
	vector<int> tail;
	for(int i = 0; i < a.size(); i++){
		int x = a[i];
		auto it = lower_bound(all(tail), x);
		if(it == tail.end()) tail.pb(x);
		else *it = x;
		for(int t : tail)
			cout << t << ' ';
		cout << endl;
	}
	return tail.size();
}
int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	vector<int> a = {10, 2, 9, 5, 3, 7, 4, 18};
	cout << LIS_length(a);

	return 0;
}
