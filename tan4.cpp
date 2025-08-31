#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005];
int n,k;
vector<vector<int>> ve;
void Try(int bd,int cnt,int sum){
    cout << bd << ' ' << cnt << ' ' << sum  << endl;
    for(int j=bd;j<n;j++){
        if(sum+a[j]==k){
            b[cnt++]=a[j];
            vector<int> v;
            cout << "Them vector : ";
            for(int i=0;i<cnt;i++){
                cout << b[i] << ' ';
                v.push_back(b[i]);
            }
            cout << endl;
            ve.push_back(v);
            return;
        }else if(sum+a[j]<k){
            b[cnt]=a[j];
            Try(j,cnt+1,sum+a[j]);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ve.clear();
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[0]>k){
            cout<<"-1\n";
        }else{
            Try(0,0,0);
            if(ve.size()==0){
                cout<<"-1\n";
            }else{
                cout<<ve.size()<<" ";
                for(auto x: ve){
                    cout<<"{";
                    for(int i=0;i<x.size();i++){
                        if(i==x.size()-1){
                            cout<<x[i]<<"} ";
                        }else{
                            cout<<x[i]<<" "; 
                        }
                    }
                }
                cout<<endl;
                            
            }
        }
        
    }
}
