#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define ll long long
#define Hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

ll solve(ll n, ll p)
{
    ll ans = 0;
    for(ll x = 1; x < p; ++x)
    {
        if((x * x) % p == 1)
        {
        	cout << x << ' ';
            ll tmp = x + p * (n / p);
            if (tmp > n) tmp -= p;
            cout << tmp << ' ';
            ans += ((tmp - x) / p + 1);
            cout << ans << '\n';
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