#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> w;
        for(int i=0;i<n;i++){
            int e;
            cin>>e;
            w.push_back(e);
        }
        sort(w.begin(), w.end());

        if(w[0]!=w[1]){
            cout<<"yes"<<"\n";
        }
        else{
            int f=0;
            for(int i=1;i<n;i++){
                if(w[i]%w[0]!=0){
                    f=1;
                    break;
                }
            }
            if(f){
                cout<<"yes"<<"\n";
            }
            else{
            cout<<"no"<<"\n";

            }
        }
    }
    return 0;
}