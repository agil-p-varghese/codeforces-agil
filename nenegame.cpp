#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int k,q;cin>>k>>q;
        int a[k+1],n[q+1];
        for(int i=1;i<=k;i++){
            cin>>a[i];
        }
        for(int i=1;i<=q;i++){
            cin>>n[i];
        }
       for(int i=1;i<=q;i++){
        if(n[i]<a[1]){
            cout<<n[i]<<" ";
        }
        else{
            cout<<a[1]-1<<" ";
        }
       }
       cout<<"\n";
    }
}