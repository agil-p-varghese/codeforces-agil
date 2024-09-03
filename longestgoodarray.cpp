#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int l,r;cin>>l>>r;
        int d=1,c=l,n=0;
        while(c<=r){
            c=c+d;d++;n++;
        }
        cout<<n<<"\n";
    }
}