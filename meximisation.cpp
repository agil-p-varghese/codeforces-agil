#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        multiset<int>s;
        set<int>ss;
        for(int i=1;i<=n;i++){
            int e;
            cin>>e;
            s.insert(e);
            ss.insert(e);
        }
        for(auto v:ss){
            cout<<v<<' ',s.erase(s.find(v));
        }
        for(auto v:s){
            cout<<v<<' ';
        }
        cout<<"\n";
    }
}