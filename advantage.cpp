#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],b[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        int diff;
        for(int i=0;i<n;i++){
            diff=b[i]-(a[n-1-bool(a[n-1]==b[i])]);
            cout<<diff<<"\n";
        }
    }
}