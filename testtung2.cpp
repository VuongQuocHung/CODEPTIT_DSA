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
	int s = 1;
	int x, n; cin >> x >> n;
	FOR(i, 1, n){
		int p = 1;
		FOR(j, 1, i){
			p = p * x / j;
			s += p;
			cout << "p = " << p << " s = " << s << endl;
		}
	}
	cout << s;

	return 0;
}
