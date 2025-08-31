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
	double x, y, size = 10;
	for(x = 0; x < size; x++){
		for(y = 0; y <= 4*size; y++){
			double dis1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
			double dis2 = sqrt(pow(x - size, 2) + pow(y - 3*size, 2));
			if(dis1 < size + 0.5 || dis2 < size + 0.5){
				cout << "V";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
	for(x = 1; x < 2 * size; x++){
		for(y = 0; y < x; y++){
			cout << " ";
		}
		cout << endl;
	}

	return 0;
}

//_______________________________B23DCCN375_______________________________//