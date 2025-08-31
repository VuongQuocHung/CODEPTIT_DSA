#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;  
    cin.ignore();
	vector<string> v; 
    unordered_map<string, int> mp;  
	vector<string> chu_de(n); 
    string tmp;  
    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        v.push_back(line);
    }
    chu_de[0] = v[0];
    mp[chu_de[0]] = 0;
    int i = 1, j = 0;
    while(i < n){
    	if(v[i].length()){
    		mp[chu_de[j]]++;
    		i++;
		}else{
			++j;
			chu_de[j] = v[i+1];
			mp[chu_de[j]] = 0;
			i+=2;
		}
	}
	for(int i = 0; i <= j; i++){
		cout<<chu_de[i]<<": "<<mp[chu_de[i]]<<'\n';
	}
    return 0;
}