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

ll firstValue(ll i){
	return i * (i - 1)/2 + 1;
}

ll lastValue(ll i){
	return i * (i + 1)/2;
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	ll x, y, z; 
	cin >> x >> y >> z;
	int tmp = x + y - 1;
	cout << firstValue(tmp) + y - 1;

	ll duong_cheo;
	ll l = 1, r = 1e9;
	while(l <= r){
		ll mid = (l + r)/2;
		if(firstValue(mid) <= z && z <= lastValue(mid)){
			duong_cheo = mid;
			break;
		}
		else if(firstValue(mid) < z) l = mid + 1;
		else r = mid - 1;
	}

	ll first = firstValue(duong_cheo);
	ll cot = z - first + 1;
	ll hang = duong_cheo + 1 - cot;
	cout << '\n' << hang << ' ' << cot;

	return 0;
}

//_______________________________B23DCCN375_______________________________//