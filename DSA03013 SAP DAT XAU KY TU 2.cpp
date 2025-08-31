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

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		int D;
		string s;
		cin >> D >> s;
		unordered_map<char, int> freq;
		int max_freq = 0;
		for(char ch : s){
			freq[ch]++;
			max_freq = max(freq[ch], max_freq);
		}
		if(max_freq * D - 1 > s.size())
			cout << -1 << '\n';
		else
			cout << 1 << '\n'; 
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//