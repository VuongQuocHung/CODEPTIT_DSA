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
	string getTen(){
		stringstream ss(hoTen);
		string w;
		string res;
		while(ss >> w){
			for(char& ch : w) ch = tolower(ch);
			res += w + " ";
		}
		res.pop_back();
		return res;
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
		string word; cin >> word;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << word << ":\n";
		for(char& ch : word) ch = tolower(ch);
		for(auto g : gv){
			if(g.getTen().find(word) != std::string::npos){
				g.in();
			}
		}
	}
}