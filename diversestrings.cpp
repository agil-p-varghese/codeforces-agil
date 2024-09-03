#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        vector<int>v;
        int flag=0;
        int l=s.size();
        for(int i=0;i<l;i++){
            int e;
            e=s[i];
            v.push_back(e);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<l-1;i++){
            if((v[i+1]-v[i])!=1){
               // cout<<v[i+1]<<v[i]<<"\n";
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
}