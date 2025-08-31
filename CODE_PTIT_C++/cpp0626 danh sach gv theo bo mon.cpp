#include <bits/stdc++.h>
#define ll long long
#define hung ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
class Teacher{
private:
	string id, hoTen, mon;
public:
	Teacher(string id, string hoTen, string mon){
		this->id = id;
		this->hoTen = hoTen;
		this->mon = mon;
	}
	string getTen(){
		stringstream ss(hoTen);
		string w;
		string res;
		while(ss >> w){
			res = w;
		}
		return res;
	}
	string getId(){
		return id;
	}
	string getMon(){
		stringstream ss(mon);
		string tmp;
		string res;
		while(ss >> tmp){
			res += toupper(tmp[0]);
		}
		return res;
	}
	void in(){
		cout << id << ' ' << hoTen << ' ' << getMon() << '\n';
	}
};
int main(){
	hung;
	int n; cin >> n; cin.ignore();
	vector<Teacher> gv;
	string name, subject;
	for(int i = 0; i < n; i++){
		string stt = to_string(i + 1);
		if(i < 9) stt = "0" + stt;
		stt = "GV" + stt;

		getline(cin, name);
		getline(cin, subject);
		Teacher a(stt, name, subject);
		gv.push_back(a);
	}
	int t; cin >> t; cin.ignore();
	while(t--){
		string s; getline(cin, s);
		stringstream ss(s);
		string w;
		string res = "";
		while(ss >> w){
			res += toupper(w[0]);
		}
		cout << "DANH SACH GIANG VIEN BO MON " << res << ":\n";
		for(auto g : gv){
			if(g.getMon() == res){
				g.in();
			}
		}
	}
}