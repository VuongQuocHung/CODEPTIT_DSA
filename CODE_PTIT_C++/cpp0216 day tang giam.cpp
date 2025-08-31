#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define Hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve(){
	int n; cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	int l, r; cin >> l >> r;
	//if(r == n) --r;
	int pos = -1;
	for(int i = l; i < r; i++){
		if(a[i] > a[i + 1]){
			pos = i;
			break;
		}
	}
	if(pos != -1){
	    for(int i = pos; i < r; i++){
		    if(a[i] < a[i + 1]){
			    pos = -2;
			    break;
		    }
	    }
    }
	if(pos != -2) cout << "Yes\n";
	else cout << "No\n";
}
int main(){
	Hung;
	int t; cin >> t;
	while(t--){
		solve();
	}
}