#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, ok = 0;
int a[100];

void init() {
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

bool check(int a[], int n) {
    if (a[1] != 1 || a[n] != 0) return false;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i + 1] && a[i] == 1) return false;
    }
    return true;
}


void sinh() {
    int i = n;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 0) ok = 1;
    else a[i] = 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ok = 0;
        cin >> n;
        init();
        while (!ok) {
            if (check(a, n)) {
                for (int i = 1; i <= n; i++) {
                    cout << (a[i] == 0 ? 'A' : 'H');
                }
                cout << '\n';
            }
            sinh();
        }
    }
    return 0;
}
