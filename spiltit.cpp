#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k,m=0;cin>>n>>k;
        string s;cin>>s;
       for(m=0;m<n-m-2 && s[m]==s[n-m-1];)m++;
       if(m>=k){
        cout<<"YES"<<"\n";
       }
       else{
        cout<<"NO"<<"\n";
       }
    }
}