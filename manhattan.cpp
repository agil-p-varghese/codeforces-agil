#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m,tx=0,ty=0,count=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                char c;
                cin>>c;
                if(c=='#'){
                    tx+=i;
                    ty+=j;
                    count+=1;
                }
            }
        }
        cout<<tx/count<<"\t"<<ty/count<<"\n";
    }
}