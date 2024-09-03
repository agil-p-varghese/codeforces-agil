#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5,mod=1e9+7;
int t,n,x,sp,p,q;
int qp(int a,int b){
	int res=1;
	while (b>0){
		if (b%2) res*=a;
		a*=a; b/=2;
		a%=mod; res%=mod;
	}
	return res;
}
signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>t;
	while (t--){
		cin>>n; q=n*(n-1)/2%mod; p=sp=0;
		for (int i=1; i<=n; i++){
			cin>>x; p+=sp*x; p%=mod;
			sp+=x; sp%=mod;
		}
		cout<<p*qp(q,mod-2)%mod<<"\n";
	}
}