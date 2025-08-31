#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<int> a(m);
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }
        int cnt = 0;
        int left = 0, right = 0;
        while (right < m) {
            if (a[right] <= n) {
                if (left != right) {
                    swap(a[left], a[right]);
                    ++cnt;
                }
                ++left;
            }
            ++right;
        }
        cout << "\n";
        cout << cnt << "\n";  
    }
    return 0;
}
