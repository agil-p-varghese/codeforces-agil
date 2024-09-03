#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        string s[(3*n)+1];
        map<string,int>m;
        for(int i=0;i<3*n;i++){
            cin>>s[i];
            m[s[i]]++;
        }
        for(int i=0;i<3*n;i++){
            if(m[s[i]]==2){
                c+=1;
            }
            else if(m[s[i]]==1){
                c+=3;
            }
            if((i+1)%n==0){
                cout<<c<<"\n";
                c=0;
                continue;
            }
        }
    }
}