#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        int m=n/2;
        while(m>0 && s[m]==s[m-1])
        m--;
        cout<<n-m*2<<"\n";
    }
}