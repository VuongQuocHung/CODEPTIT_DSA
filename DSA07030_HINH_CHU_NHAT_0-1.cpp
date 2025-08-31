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

int n, m, a[1005][1005], h[1005];

void ben_trai(int L[]){
    stack<int> st;
    FOR(i, 1, m){
        while(!st.empty() && h[st.top()] >= h[i]) st.pop();
        if(st.empty()) L[i] = 0;
        else L[i] = st.top();
        st.push(i);
    }
}

void ben_phai(int R[]){
    stack<int> st;
    FORD(i, m, 1){
        while(!st.empty() && h[st.top()] >= h[i]) st.pop();
        if(st.empty()) R[i] = m + 1;
        else R[i] = st.top();
        st.push(i);
    }
}

int max_area(int h[], int m){ // áp dụng thuật toán Largest Rectangle in Histogram
	int L[m + 1], R[m + 1];
	ben_phai(R); ben_trai(L);
	int ans = 0;
	FOR(i, 1, m) ans = max(ans, h[i] * (R[i] - L[i] - 1));
	return ans;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		cin >> n >> m;
		FOR(i, 1, n) FOR(j, 1, m) cin >> a[i][j];
		int res = 0;
		FOR(i, 1, n){
			// coi mỗi hàng của ma trận là đáy của 1 biểu đồ histogram
			// với chiều cao của mỗi cột là số lượng số 1 liên tiếp 
			FOR(j, 1, m){
				if(a[i][j] == 0) h[j] = 0;
				else h[j] += 1;
			}
			res = max(res, max_area(h, m));
		}
		cout << res << endl;
	}

	return 0;
}
