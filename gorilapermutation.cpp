#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k,sf=0,sg=0;
        cin>>n>>m>>k;
        for(int i=n;i>=k;i--){
            cout<<i<<" ";
        }
        if(k>m){
            for(int i=k+1;i>m;i++){
                cout<<i<<" ";
            }
        }
        for(int i=1;i<=m;i++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}