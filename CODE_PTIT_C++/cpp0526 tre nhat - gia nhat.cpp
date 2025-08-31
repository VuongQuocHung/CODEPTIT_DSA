#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name, date;
    int d, m, y;
    void input() {
        cin >> name >> date;
        d = stoi(date.substr(0, 2));
        m = stoi(date.substr(3, 2));
        y = stoi(date.substr(6));
    }
};
bool cmp(SinhVien a, SinhVien b){
	if(a.y != b.y) return a.y > b.y;
	else if(a.m != b.m) return a.m > b.m;
	else return a.d > b.d;
}
int main(){
    int n;
    cin >> n;
    SinhVien sv[n];
    for(int i = 0; i < n; i++) {
    	sv[i].input();
	}
    sort(sv, sv + n, cmp);
    cout << sv[0].name << '\n';
    cout << sv[n - 1].name << '\n';
}