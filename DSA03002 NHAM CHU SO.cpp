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

int sumMin(int a, int b){
	string x = to_string(a);
	string y = to_string(b);
	for(char &ch : x)
		if(ch == '6') ch = '5';
	for(char &ch : y)
		if(ch == '6') ch = '5';
	return stoi(x) + stoi(y);
}

int sumMax(int a, int b){
	string x = to_string(a);
	string y = to_string(b);
	for(char &ch : x)
		if(ch == '5') ch = '6';
	for(char &ch : y)
		if(ch == '5') ch = '6';
	return stoi(x) + stoi(y);
}

int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int a, b;
	cin >> a >> b;
	cout << sumMin(a, b) << ' ' << sumMax(a, b);

	return 0;
}

//_______________________________B23DCCN375_______________________________//