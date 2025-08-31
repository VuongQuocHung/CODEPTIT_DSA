#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main(){
	hung;
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++) cin >> a[i][j];
		}
	    vector<int> tongHang(n), tongCot(n);
	    for(int i = 0; i < n; i++){
	    	for(int j = 0; j < n; j++){
	    		tongHang[i] += a[i][j];
	    		tongCot[j] += a[i][j];
	    	}
	    }
	    int targetSum = *max_element(tongHang.begin(), tongHang.end());
	    targetSum = max(targetSum, *max_element(tongCot.begin(), tongCot.end()));
	    int cnt = 0;
	    for(int i = 0; i < n; i++){
	    	cnt += targetSum - tongHang[i];
	    }
	    cout << cnt << '\n';
	}
}