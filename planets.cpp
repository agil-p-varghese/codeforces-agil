#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c,res=0;
        cin>>n>>c;
        map<int,int>s;
        for(int i=1;i<=n;i++){
            s[i]=0;
        }
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            s[y]++;
        }
 /*       for(int i=1;i<=n;i++){
            if(c>=s[i]){
                res+=s[i];
            }
            else{
                res+=c;
            }
        }*/
        for(auto mm:s){
		 res+=min(c,mm.second);
		}
        cout<<res<<"\n";
    }
}