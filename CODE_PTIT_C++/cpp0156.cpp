#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define Hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


// Tìm số nghiệm của phương trình đồng dư x2 = 1(mod) p trong khoảng [1,b].
// Ví dụ với b=5, p=7 ta tìm được x = 1 €[1,5] để x2 = 1 %7=1. 
// Với b = 8, p=6 ta tìm được x = {1, 5, 7} để x2 = 1(mod 7).


ll solve(ll b, ll p)
{
	ll ans = 0;
	for(ll i = 1; i < p; i++){
		// nếu i^2 mod p = 1
		if((i * i) % p == 1){
			// tìm số lớn nhất trong khoảng (1, n) mà mod p = 1
			ll tmp = i + p * (b / p);
			if(tmp > b) tmp -= p;// nếu vượt quá n thì giảm đi p đơn vị
			// cập nhật ans với số lượng số mod p = 1 từ i đến tmp
			ans +=((tmp - i)/p + 1);
		}
	}
	return ans;
}

int main()
{
    Hung;
    int t;
    cin >> t;
    while(t--)
    {
        ll b, p;
        cin >> b >> p;
        cout << solve(b, p) << endl;
    }
    return 0;
}