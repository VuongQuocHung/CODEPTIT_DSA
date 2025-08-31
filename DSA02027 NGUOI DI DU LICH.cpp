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

int n;
ll c[100][100], min_cost = 1e9, fopt = 1e9;
int a[100];
bool visited[100];

void Try(int i, ll curr_cost){
	ll limit = curr_cost + min_cost * (n - i + 1);
	if(limit >= fopt) return;
	if(i == n){
		curr_cost += c[a[i - 1]][1];
		fopt = min(fopt, curr_cost);
		return;
	}
	for(int j = 2; j <= n; j++){
		if(!visited[j]){
			visited[j] = 1;
			a[i] = j;
			Try(i + 1, curr_cost + c[a[i - 1]][j]);
			visited[j] = 0;
		}
	}
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++){
			cin >> c[i][j];
			if(i != j) min_cost = min(min_cost, c[i][j]);
		}
	a[0] = 1;
	Try(1, 0);
	cout << fopt;	

	return 0;
}

//_______________________________B23DCCN375_______________________________//