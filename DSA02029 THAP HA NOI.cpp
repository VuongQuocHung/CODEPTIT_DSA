#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
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

void thn(int n, char a, char b, char c) {
	if (n == 1) cout << a << " -> " << c<<endl;
	else{
		thn(n - 1, a, c, b);
		cout << a << " -> " << c << endl;
		thn(n - 1, b, a, c);
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int n; cin >> n;
	thn(n, 'A', 'B', 'C');

	return 0;
}

//_______________________________B23DCCN375_______________________________//
