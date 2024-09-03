#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,f=0;cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(i==a[a[a[i]]]){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}