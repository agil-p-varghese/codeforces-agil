#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len=s.size();
        if(s=="()"){
            cout<<"NO"<<"\n";
            continue;
        }
        if(s.find(")(")==string::npos){
            cout<<"YES"<<"\n";
            for(int i=0;i<len;i++){
                cout<<"()";
            }
            cout<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
            cout<<string(len,'(')<<string(len,')')<<"\n";
        }
    }
}