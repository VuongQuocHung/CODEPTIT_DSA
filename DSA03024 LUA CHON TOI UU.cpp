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

bool cmp(ii x, ii y){
	if(x.se != y.se) return x.se < y.se;
	return x.fi > y.fi;
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
		int n;
		cin >> n;
		vector<ii> jobs;
		for(int i = 0; i < n; i++){
			int s, f; 
			cin >> s >> f;
			jobs.pb({s, f});
		}
		sort(all(jobs), cmp);
		int cnt = 0, time_end = 0;
		for(ii job : jobs){
			int start = job.fi, end = job.se;
			if(start >= time_end){
				++cnt;
				time_end = end;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}
