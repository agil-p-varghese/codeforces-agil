#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,f=0;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=2;i<=n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                cout<<"YES"<<"\n";
                cout<<i-1<<" "<<i<<" "<<i+1<<"\n";
                f=1;
                break;
            }
            
        }
        if(f==0){
                cout<<"NO"<<"\n";
            }
    }
}