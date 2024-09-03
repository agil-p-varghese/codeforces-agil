#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int x[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        if(n<3 && (x[1]-x[0])>1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";

        }
    }
}