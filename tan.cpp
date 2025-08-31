#include<bits/stdc++.h>
using namespace std;
void test(){
    int n,k;
    cin>>n>>k;
    if(n<3){
        cout<<0<<endl;
        return;
    }
    int a[n];
    for(int&x:a){
        cin>>x;
    }
    sort(a,a+n);
    int cnt=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            int x=a[i]+a[j];
            if(x>=k){
                break;
            }else{
                auto it = lower_bound(a+j+1,a+n,k-x);
                cnt += (it - (a + j + 1));
            }
        }
    }
    cout<<cnt<<endl;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    
    int t;
    cin>>t;
    while(t--){
        test();
    }
}