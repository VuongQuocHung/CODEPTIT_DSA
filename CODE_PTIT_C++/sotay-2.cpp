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

struct Data{
    string name, sortedname, phone, date;
};

string getSortedName(string& ten){
	stringstream ss(ten);
	vector<string> v;
	string w;
	while(ss >> w){
		v.push_back(w);
	}
	string res = v.back();
	for(int i = 0; i < v.size() - 1; i++){
		res += " " + v[i];
	}
	return res;
}

bool cmp(Data& a, Data& b){
	return a.sortedname < b.sortedname;
}
int main(){
	hung;
	ifstream fin("SOTAY.txt");
	ofstream fout("DIENTHOAI.txt");

	string line, current_date;

	vector<Data> list;

	while(getline(fin, line)){
		if(line.find("Ngay", 0) == 0){
			current_date = line.substr(5);
		}else if(!line.empty()){
			string name = line;
			string sortedname = getSortedName(name);
			if(getline(fin, line)){
				string phone = line;
				list.push_back({name, sortedname, phone, current_date});
			}
		}
	}
	sort(list.begin(), list.end(), cmp);

	for(auto& i : list){
		fout << i.name << " : " << i.phone << ' ' << i.date << '\n';
	}
}