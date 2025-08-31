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

int n, k, a[1005];

void in(){
	FOR(i, 1, k) cout << a[i];
	cout << ' ';
}

void sinh(){
	int final = 0;
	while(!final){
		while(1){
			in();
			int i = k;
			while(i >= 1 && a[i] == n - k + i) --i;
			if(i == 0){
				final = 1;
				break;
			}
			a[i] += 1;
			FOR(j, i + 1, k) a[j] = a[i] + j - i;
		}
	}
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
		cin >> n >> k;
		FOR(i, 1, k) a[i] = i;
		sinh();
		cout << endl;
	}

	return 0;
}
