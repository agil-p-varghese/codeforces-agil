#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,a=0,b=-1,f=1;cin>>n;
        string s;cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]<9){
                if(s[i]<b){
                    f=0;
                    break;
                }
                else{
                    b=s[i];
                }
            }
            else{
                if(s[i]<a){
                    f=0;break;
                }
                else{
                    a=s[i];
                }
            }
        }
        if(f==1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}