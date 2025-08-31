#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
const int MAXN = 1000005; 
ll a[MAXN], b[MAXN], c[MAXN], d[MAXN];

int solve(int l,int r,ll c[],ll d[]){
    if(l>r) return -1;
    int mid =(l+r)/2;
    if(c[mid]!=d[mid]){
    int tmp=solve(l,mid-1,c,d);
        if(tmp!=-1) return tmp;
        return mid;
    }else{
        return solve(mid+1,r,c,d);
    }
    return -1;
}
int main(){
    int t;cin>>t;
    while(t--){
        memset(c,0,sizeof(c));
        memset(d,0,sizeof(d));
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            c[i]=c[i-1]+a[i];
        }
        for(int i=1;i<=n-1;i++){
            cin>>b[i];
            d[i]=d[i-1]+b[i];
        }
        int pos=solve(1,n-1,c,d);
        if(pos==-1){
            cout<<n<<endl;
        }else{
            cout<<pos<<endl;
        }
    }
}