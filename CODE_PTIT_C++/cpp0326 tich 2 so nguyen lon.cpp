#include <bits/stdc++.h>
using namespace std;
string tich(string a, string b){
	auto a_0 = a.find_first_not_of('0'), b_0 = b.find_first_not_of('0');
	if(a_0 == std::string::npos || b_0 == std::string::npos) return "0";
	int n1 = a.size(), n2 = b.size();
	vector<int> res(n1 + n2, 0); // tao vector voi n1 + n2 ptu
    for (int i = n1 - 1; i >= 0; i--) {
        for (int j = n2 - 1; j >= 0; j--) {
            int mul = (a[i] - '0') * (b[j] - '0');
            int sum = mul + res[i + j + 1]; // cap nhat tich
            res[i + j + 1] = sum % 10; 
            res[i + j] += sum / 10;
        }
    }
	string kq;
    for (int num : res) {
        if (!(kq.empty() && num == 0)) { // bo qua 0 o dau
            kq.push_back(num + '0');
        }
    }
	return kq;
}
int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		string a,b; cin>>a>>b;
		cout<<tich(a, b)<<'\n';
	}
}