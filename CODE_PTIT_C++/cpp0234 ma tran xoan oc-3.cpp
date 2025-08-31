#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m, k; cin >> n >> m >> k;
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++) cin >> a[i][j];
		}
	    int top = 0, bot = n - 1;
	    int left = 0, right = m - 1;
	    int cnt = 0;
	    int res[n * m];
	    while(left <= right && top <= bot){
	    	for(int i = left; i <= right; i++){
	    		res[cnt++] = a[top][i];
	    	}
	    	++top;
	    	for(int i = top; i <= bot; i++){
	    		res[cnt++] = a[i][right];
	    	}
	    	--right;
	    	if(top <= right){
	    		for(int i = right; i >= left; i--){
	    			res[cnt++] = a[bot][i];
	    		}
	    		--bot;
	    	}
	    	if(left <= right){
	    		for(int i = bot; i >= top; i--){
	    			res[cnt++] = a[i][left];
	    		}
	    		++left;
	    	}
	    }
	    cout << res[k - 1] << '\n';
	}
}