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

//____________________________VƯƠNG_QUỐC_HƯNG____________________________//

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	cin.ignore();
	while(T--){
		string s1, s2; cin >> s1 >> s2;
		int n1 = s1.size(), n2 = s2.size();
		int dp[100][100] = {0};
		FOR(i, 0, n1){
			FOR(j, 0, n2){
				if(i == 0 || j == 0) dp[i][j] = i + j;
				else if(s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1];
				else dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1;
			}
		}
		cout << dp[n1][n2] << endl;
	}

	return 0;
}

//________________________________H_Ư_N_G_______________________________//