#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int l;cin>>l;
        int n1=0,n0=0;
        string s;cin>>s;
        long long x=sqrt(l);
        if(x*x!=l){
            cout<<"NO"<<"\n";
            continue;
        }
        for(int i=0;i<l;i++){
            //cout<<"s[i]="<<s[i]<<"\n";
            if(s[i]=='1'){
                n1++;
                //cout<<n1<<"in n1 loop\n";
            }
            else{
                n0++;
                //cout<<n0<<"in n0 loop\n";

            }
        }
       // cout<<"n1="<<n1<<"  n0=="<<n0<<"\n";
        if((n1==4*(x-1) && n0==(x-2)^2)||(n1==1 && n0==0)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
}