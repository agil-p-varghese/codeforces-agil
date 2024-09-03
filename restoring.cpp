#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n+1],f[n+1];
        s[0]=0;
        f[0]=0;
        for(int i=1;i<=n;i++){
            cin>>s[i];
        }
        for(int i=1;i<=n;i++){
            cin>>f[i];
        }
        for(int i=1;i<=n;i++){
            cout<<f[i]-max(s[i],f[i-1])<<" ";
        }
        cout<<"\n";
    }
}