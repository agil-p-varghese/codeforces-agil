#include<bits\stdc++.h>
using namespace std;
int main(){
    int u[2000],p[2000];
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    for(int i=1;i<=n;i++){
        fill(u+1,u+n+1,0);
        int j=i;
        while(u[j]<1){
            u[j]++;
            j=p[j];
        }
        cout<<j<<" ";
    }
}