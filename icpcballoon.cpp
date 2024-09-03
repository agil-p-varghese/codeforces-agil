#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,res=0;
        cin>>n;
        string str;
        cin>>str;
        map<char,int> mp;
        for(char x:str){
            if(mp[x]==0){
                res++;
            }
            mp[x]++;
            res++;
        } 
        cout<<res<<"\n";

    }
}