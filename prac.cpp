#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
int n,x=0;
cin>>n;
map<int,int>mp;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    x=__gcd(x,a[i]);
    mp[a[i]]++;
}
if(mp[x]>1)cout<<"NO"<<'\n';
else cout<<"YES"<<'\n';
}
return 0;
}