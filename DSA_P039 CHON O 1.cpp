#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int N = 25;
int n, a[N][N], cost[N][N];
int match[N], used[N], label_x[N], label_y[N];
int max_a;

void update_labels(int x, int y, int delta) {
	FOR(i, 1, n) if (used[i]) label_x[i] -= delta;
	FOR(i, 1, n) if (match[i] == -1 || used[match[i]]) label_y[i] += delta;
}

int find_augmenting_path(int x) {
	FOR(y, 1, n) {
		if (!used[y] && label_x[x] + label_y[y] == cost[x][y]) {
			used[y] = 1;
			if (match[y] == -1 || find_augmenting_path(match[y])) {
				match[y] = x;
				return 1;
			}
		}
	}
	return 0;
}

ll hungarian() {
    // Khởi tạo nhãn
	memset(label_x, 0, sizeof(label_x));
	memset(label_y, 0, sizeof(label_y));
	memset(match, -1, sizeof(match));

    // Tìm nhãn ban đầu
	FOR(i, 1, n) {
		int max_label = 0;
		FOR(j, 1, n) max_label = max(max_label, cost[i][j]);
		label_x[i] = max_label;
	}

    // Tìm ghép tối ưu
	FOR(x, 1, n) {
		while (true) {
			memset(used, 0, sizeof(used));
			if (find_augmenting_path(x)) break;

            // Tìm delta nhỏ nhất
			int delta = 1e9;
			FOR(i, 1, n) if (used[i]) {
				FOR(j, 1, n) if (!used[j]) {
					delta = min(delta, label_x[i] + label_y[j] - cost[i][j]);
				}
			}
            if (delta == 1e9) return -1; // Không có ghép hoàn hảo

            // Cập nhật nhãn
            FOR(i, 1, n) if (used[i]) label_x[i] -= delta;
            FOR(j, 1, n) if (!used[j]) label_y[j] += delta;
        }
    }

    // Tính tổng giá trị lớn nhất
    ll result = 0;
    FOR(y, 1, n) if (match[y] != -1) {
        result += max_a - cost[match[y]][y]; // Chuyển về giá trị gốc
    }
    return result;
}

int main() {
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	
	int T;
	cin >> T;
	while (T--) {
		cin >> n;
		max_a = 0;
		FOR(i, 1, n) FOR(j, 1, n) {
			cin >> a[i][j];
			max_a = max(max_a, a[i][j]);
		}

        // Chuyển ma trận thành chi phí (tối đa hóa -> tối thiểu hóa)
		FOR(i, 1, n){ 
			FOR(j, 1, n) {
				cost[i][j] = max_a - a[i][j];
			}

			ll result = hungarian();
			cout << result << endl;
		}
		return 0;
	}
}