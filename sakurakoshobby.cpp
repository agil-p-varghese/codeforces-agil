#include<bits\stdc++.h>
using namespace std;
const int N=1e6+100;
string s;int arr[N];
bool bo[N];int ans[N];
int q;
void dfs(int u){
    bo[u]=1;
    if(s[u-1]=='0')q++;
    if(bo[arr[u]]==0){dfs(arr[u]);}
    ans[u]=q;
}
int main(){
    int t;cin>>t;
    while(t--){
        memset(bo,0,sizeof bo);
        int n;cin>>n;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        cin>>s;
        for(int i=1;i<=n;i++){
            q=0;
            if(bo[i]==0){dfs(i);}
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<"\n";
        }


    }
}