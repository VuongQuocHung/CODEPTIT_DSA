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

int n, k;
int a[1005], b[1005];
bool final = 0;

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i) --i;
	if(i < 1) final = 1;
	else{
		a[i]++;
		FOR(j, i + 1, k) a[j] = a[j - 1] + 1;
	}
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
		cin >> n >> k;
		FOR(i, 1, k){
			cin >> a[i];
			b[i] = a[i];
		}
		sinh();
		if(final) cout << k << '\n';
		else{
			int count = 0;
			for (int i = 1; i <= k; i++)
				for (int j = 1; j <= k; j++)
					if (a[i] == b[j]) count++;
			cout << k - count << endl;
		}
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//