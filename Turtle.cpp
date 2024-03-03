#include<bits/stdc++.h>
using namespace std;
#define ll long long

//my first commit in git in c++ hi
//first commit from git 
void solve(){
	int n;
	cin>>n;
	vector<int>a(n+1),b(n+1,0);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i]+b[i-1];	
	}
	int q;
	cin>>q;
	while(q--){
		int l,u;
		cin>>l>>u;
		int id=upper_bound(b.begin()+l,b.end(),b[l-1]+u)-b.begin();
		u-=b[id-1]-b[l-1];
		if(id<=n){
			if(a[id]&1){
				if(u>a[id]/2)id++;
			}
			else if(u>=a[id]/2)id++;
		}
		cout<<max(id-1,l)<<' ';
	}
	cout<<'\n'; 
	/*
1
2
3 11
1
1 11
	*/
}
int main()
{
	int t;
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0); 
	cin>>t;
	while(t--)solve();
	return 0;
}
