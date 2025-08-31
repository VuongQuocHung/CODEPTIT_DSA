#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

void in(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i];
	}
	cout << ' ';
}

void Try(int i, int a[], int n){
	for (int j = 0; j <= 1; ++j) {
        a[i] = j;
        if (i + 1 == n) in(a, n);
        else Try(i + 1, a, n);
    }
}

void solve(){
	int n; cin >> n;
	int a[n];
	Try(0, a, n);
	cout << '\n';
}

int main(){
    int t; cin >> t;
    while(t--){
    	solve();
    }
}