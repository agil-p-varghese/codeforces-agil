#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int c=0,l,n;
        cin>>n;
        map<int,int>b;
        for(int i=1;i<=n;i++){
            cin>>l;
            if(b[l]>c){
                c=b[l];
            }
            b[l]=i;
        }
        cout<<c<<"\n";
    }
}