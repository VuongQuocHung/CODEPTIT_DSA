#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n;
    cin >> n;
    ll max_sum = -1e9, current_sum = 0;  // max_sum khởi tạo với giá trị rất âm
    
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        
 
        current_sum = max(x, current_sum + x);
        

        max_sum = max(max_sum, current_sum);
    }
    
    cout << max_sum << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}