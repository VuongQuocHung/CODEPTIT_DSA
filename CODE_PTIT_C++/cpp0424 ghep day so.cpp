#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    	int k, n; cin>>k>>n;
    	multiset<int> ms;
    	int num;
    	for(int i = 0; i< k * n; i++){
    		cin>>num;
    		ms.insert(num);
		}
		for(auto i : ms) cout<<i<<' ';
		cout<<'\n';
    }
}