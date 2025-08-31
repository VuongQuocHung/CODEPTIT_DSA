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

string solve(){
	string s1, s2;
	cin >> s1 >> s2;
	// freq dùng để lưu tần suất các ký tự trong s2
	// window dùng để lưu xâu con đang xét
	unordered_map<char, int> freq, window;
	for(char& ch : s2) freq[ch]++;

	int left = 0, right = 0;
    int cnt = 0;
    int minLength = INT_MAX, start = 0;
    // duyệt xâu s1
    while(right < s1.size()){
    	char c = s1[right];
    	++right;
    	// nếu ký tự đang xét c xuất hiện trong s2
    	if(freq.count(c)){
    		// cập nhật tần suất ký tự đó trong window
    		window[c]++;
    		// nếu tần suất của c trong window bằng tần suất của c trong s2
    		if(window[c] == freq[c]){
    			cnt++; // tăng cnt
    		}
    	}
    	// thu nhỏ cửa số khi thoả mãn điều kiện
    	while(cnt == freq.size()){
    		// cập nhật độ dài nhỏ nhất và vị trí bắt đầu
    		if(right - left < minLength){
    			minLength = right - left;
    			start = left;
    		}
    		// loại bỏ ký tự đầu tiên ra khỏi cửa sổ
    		char d = s1[left];
    		// tăng biến left
    		++left;
    		// nếu d xuất hiện trong s2
    		if(freq.count(d)){
    			// nếu d thoả mãn yêu cầu thì giảm cnt
    			if(window[d] == freq[d]){
    				cnt--;
    			}
    			window[d]--;
    		}
    	}
    }
    return minLength == INT_MAX ? "-1" : s1.substr(start, minLength);
}
int main(){
	int t; cin >> t; cin.ignore();
	while(t--){
		cout << solve() << '\n';
	}
}