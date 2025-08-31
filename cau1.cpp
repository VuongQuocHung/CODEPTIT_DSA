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

int n, cnt = 1, a[100], check = 0;

void init(){
	cnt = 1;
	a[1] = n;
}

void sinh(){
	vector<vi> res;
	vi a(n, 0);
	int k = 0;
	a[k] = n;
	while(1){
		res.pb(vector<int> (a.begin(), a.begin() + k + 1));
		int tmp = 0;
		while(k >= 0 && a[k] == 1){
			tmp += a[k];
			--k;
		}
		if(k < 0) break;
		a[k]--;
		tmp++;
		while(tmp > a[k]){
			a[k + 1] = a[k];
			tmp -= a[k];
			++k;
		}
		a[k + 1] = tmp;
		++k;
	}
	cout << res.size() << '\n';
	for(vi r : res){
		cout << "(";
		for(int i = 0; i < r.size(); i++){
			cout << r[i];
			if(i != r.size() - 1) cout << ' ';
		}
		cout << ") ";
	}
}

int main(){
	faster();
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		sinh();
		cout << '\n';
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//