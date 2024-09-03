#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        char a[6];cin>>a;
        if((a[0]==49 && a[1]==48) && (a[2]>49 || (a[2]>48 && a[3]))){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}