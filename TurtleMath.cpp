#include<iostream>
using namespace std;

void solve(){
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int rem_1=-1,rem_2=-1;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(a[i]%3==1){
            rem_1=a[i];
        }
        if(a[i]%3==2){
            rem_2=a[i];
        }

    }
    int cost=0;

    if(sum%3==0){
        cost=0;
    }
    else if((sum-rem_1)%3==0 || (sum-rem_2)%3==0){
        cost=1;
    }
    else{
        cost=2;
    }
    cout<<cost<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}