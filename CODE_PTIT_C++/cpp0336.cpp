//Created by Vương Quốc Hưng
	
#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define fspr(n) fixed << setprecision(n)

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;
using vll = vector<long long>;
using vpi = vector<pair<int, int>>;
using vpp = vector<pair<pair<int, int>, int>>;

void solve(){
	string a, b; cin >> a >> b;

	// mảng dùng để đếm tần suất các ký tự trong b
    int dd[26] = {};
	FOR(i, 0, (int) b.length()-1) dd[b[i] - 'a']++;

	int minLength = INT_MAX, left = 0, right = 0;

	// duyệt qua từng ký tự trong a
	FOR(i, 0, (int) a.length() - 1){

		// mảng d dùng để đếm tần suất các ký tự từ chỉ số i trở đi
		int d[26] = {};
		FOR(j, i, (int) a.length() - 1){
			d[a[j] - 'a']++;
			bool check = 1;

			// so sánh tần suất của các ký tự trong d(xâu con a(i...j))
			// với dd(tần suất yêu cầu của s2)
			FOR(k, 0, 25){
				// bất kì ký tự nào không đạt yêu cầu thì đánh dấu check
				// và thoát khỏi for
				if(d[k] < dd[k]){
					check = 0;
					break;
				}
			}

			// nếu xâu con a(i...j) hợp lệ và có độ dài nhỏ hơn độ dài hiện tại(minLength)
			// thì ta cập nhật :
			if(check && minLength > j - i + 1){
				minLength = j - i + 1; // cập nhật độ dài 
				left = i; right = j;// cập nhật chỉ số bắt đầu và kết thúc của xâu con
			}
		}
	}
	if(minLength == INT_MAX) cout << -1 << '\n';
	else{
		FOR(i, left, right){
			cout << a[i];
		}
		cout << '\n';
	}
}
int main(){
	hung;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t; cin >> t; cin.ignore();
	while(t--){
		solve();
	}
}