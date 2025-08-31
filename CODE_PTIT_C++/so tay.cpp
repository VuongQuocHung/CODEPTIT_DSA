#include <bits/stdc++.h>
using namespace std;

struct Data {
    string name;
    string SortedName;
    string phone;
    string date;
};

string getSortedName(string& ten){
	stringstream ss(ten);
	vector<string> v;
	string w;
	while(ss >> w){
		v.push_back(w);
	}
	string res = v.back();
	FOR(i, 0, (int)v.size()- 1){
		res += " " + v[i];
	}
	return res;
}

bool cmp(Data &a, Data &b) {
    return a.SortedName < b.SortedName;
}

int main() {
    ifstream fin("SOTAY.txt");
    ofstream fout("DIENTHOAI.txt");

    vector<Data> ds;
    string line, current_date;

    while(getline(fin, line)){
        if(line.substr(0, 4) == "Ngay") {
            current_date = line.substr(5);
        }else if (!isdigit(line[0])){
            string name = line;
            string SortedName = getSortedName(name);
            if (getline(fin, line)) {
                string phone = line;
                //ds.push_back({name, SortedName, phone, current_date});
            }
        }else{
            string phone = line;
            ds.push_back({name, SortedName, phone, current_date});
        }
    }

    sort(ds.begin(), ds.end(), cmp);

    for (const auto &p : ds) {
        fout << p.name << ": " << p.phone << " " << p.date << endl;
    }

    fin.close();
    fout.close();

    return 0;
}