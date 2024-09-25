#include<bits\stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5,mod=1e9+7;
int qp(int a,int b){
    for(int x=1;x<mod;x++){
        if(((a%mod)*(x%mod))%mod ==1){
            return x;
        }
    }
}
int t,n,x,sp,p,q;

signed main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        p=0;
        sp=0;
        q=n*(n-1)/2%mod;
        for(int i=1;i<=n;i++){
            cin>>x;
            p=p+sp*x;p=p%mod;
            sp=sp+x;sp=sp%mod;
        }
		cout<<p*qp(q,mod-2)%mod<<"\n";

    }
    
}