#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+2,a+n+1);
        for(int i=2;i<=n;i++){
            if(a[i]>a[1]){
                a[1]=(a[i]+a[1]+1)/2;
            }
        }
        cout<<a[1]<<"\n";
    }
}