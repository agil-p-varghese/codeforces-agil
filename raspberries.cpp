#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,e,ans,count=0;
        cin>>n>>k;
        vector <int> v[n];
        for(int i=0;i<n;i++){
            cin>>e;
            if(e%k ==0){
                ans=0;
            }
            else{
                ans=min(ans,k-e%k);
            }
            if(i%2 ==0){
                count+=1;
            }
        }

        if(k==4){
            ans=min(ans,(2-min(0,count)));
        }

        cout<<ans<<"\n";
    }
}