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

int a[10], ok = 0;
bool visited[10];
// void Try(int i, int x){
// 	if(ok) return;
// 	if(x == 23 && i == 5){
// 		ok = 1;
// 		return;
// 	}
// 	for(int j = i + 1; j <= 5; j++){
// 		Try(i + 1, x + a[j]);
// 		Try(i + 1, x - a[j]);
// 		Try(i + 1, x * a[j]);
// 	}
// }

void Try(int i, int x){
	if(ok) return;
	if(i > 5){
		if(x == 23){
			ok = 1;
		}
		return;
	}
	Try(i + 1, x + a[i]);
	Try(i + 1, x - a[i]);
	Try(i + 1, x * a[i]);
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
		ok = 0;
		for(int i = 1; i <= 5; i++) cin >> a[i];
		sort(a + 1, a + 6);
		do{
			Try(2, a[1]);
		} while(next_permutation(a + 1, a + 6) && !ok);
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________// 