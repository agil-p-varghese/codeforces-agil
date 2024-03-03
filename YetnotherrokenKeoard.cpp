#include<iostream>
#include<vector>
#include<cctype>
using namespace std;

void solve(){
    string s="";
    cin>>s;
    vector<int> u,l;
    int e=s.size();
    for(int i=0;i<e;i++){
        if(s[i]=='B' && !u.empty()){
            u.pop_back();
            
        }
        else if(s[i]=='b' && !l.empty()){
            l.pop_back();
        }
        else if(isupper(s[i])){
            u.push_back(i);
        }
        else{
            l.push_back(i);
        }
    }

    int i=0,j=0;
    while(i<u.size() || j<l.size()){
        if(i<u.size() && (j==l.size() || u[i]<l[j])){
            cout<<s[u[i++]];
        }
        else{
            cout<<s[l[j++]];

        }
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}