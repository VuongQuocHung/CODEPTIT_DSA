#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		vector<int> a(n), b(m);
		map<int, int> dd;
		for(int& i : a) cin>>i;
		for(int& i : b){
			cin>>i;
			dd[i] = 1;
		}
		vector<int> res;
		for(int i = 0; i<n; i++){
			if(dd[a[i]] >= 1) dd[a[i]]++;
			else res.push_back(a[i]);
		}
		for(int i : b){
			if(dd[i] > 0){
				for(int j = 1; j<dd[i]; j++) cout<<i<<" ";
			}
			dd[i] = 0;
		}
		sort(res.begin(), res.end());
		for(int& i : res) cout<<i<<" ";
		cout<<"\n";
	}
}