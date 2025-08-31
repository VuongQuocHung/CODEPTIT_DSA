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

//____________________________VƯƠNG_QUỐC_HƯNG____________________________//

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		int dd[100] = {0};
		int n; cin >> n;
		while(n--){
			int x; cin >> x;
			if(x == 0) dd[0]++;
			while(x > 0){
				dd[x % 10]++;
				x /= 10;
			}
		}
		for(int i = 0; i < 10; i++){
			if(dd[i]) cout << i << ' ';
		}
		cout << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//