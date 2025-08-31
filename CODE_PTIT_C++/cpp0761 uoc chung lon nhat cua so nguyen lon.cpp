// Made by Vương Quốc Hưng

#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define fspr fixed << setprecision
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define Hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

// Cho hai số a và b trong đó a≤1012, b≤10250. 
// Nhiệm vụ của bạn là tìm ước số chung lớn nhất của hai số a, b.

// Ý tưởng : duyệt từng ký tự trong b từ đầu về cuối, mỗi lần duyệt chia dư cho a
// sau đó in ra gcd của mod và a
 int main(){
	Hung;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t; cin >> t;
	while(t--){
		ll a; string b;
		cin >> a >> b;
		ll sum = 0;
		for(char c : b){
			sum = sum * 10 + c - '0';
			sum %= a;
		}
		cout << __gcd(sum, a) << '\n';
	}
}