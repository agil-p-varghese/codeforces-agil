#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,cnt=0,f=0,po=0;cin>>n;
        vector<string>v;
        string s;
            cin>>s;
            
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                cnt++;
                po++;
                if(cnt==3){
                    f=1;
                    break;
                }
            }
            else{
                cnt=0;
            }
        }
        if(f==1){
            cout<<"2"<<"\n";
        }
        else{
            cout<<po<<"\n";
        }

    }
}