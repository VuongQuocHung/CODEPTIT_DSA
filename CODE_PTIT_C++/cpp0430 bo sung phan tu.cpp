#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    	int n; cin>>n; int a[n];
    	for(int i = 0; i<n; i++) cin>>a[i];
    	set<int> s(a, a+n);
    	auto it1 = s.begin(), it2 = --s.end();
    	int l = *it1, r = *it2;
    	cout<< r - l + 1 - s.size()<<'\n';
    }
}