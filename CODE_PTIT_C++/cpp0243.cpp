#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		vector<int> a(n), b(m);
		for(int& i : a) cin>>i;
		for(int& i : b) cin>>i;
		vector<int> res;
		set<int> se;
		//in ra nhung ptu xuat hien trong b va a
		for(int i = 0; i < m; i++){
			auto it = find(a.begin(), a.end(), b[i]);
			while( it != a.end() ){
				res.push_back(*it);
				a.erase(it);
				it = find(a.begin(), a.end(), b[i]);
			}
		}
		//in ra nhung ptu xuat hien a nhung ko trong b
		int l = res.size(), cnt = 0;
		for(int i = 0; i<n; i++){
			auto it = find(res.begin(), res.end(), a[i]);
			if( it == res.end()){
				res.push_back(a[i]); ++cnt;
			}
		}
		sort(res.begin()+l, res.begin() + l + cnt + 1);
		for(auto it = res.begin(); it != res.end(); ++it){
			cout<<*it<<" ";
		}
	}
}