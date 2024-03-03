#include<iostream>
using namespace std;

int main(){
    int t=0,x,n;
    cin>>t;
    string S="";
  
   for(int i=0;i<t;i++){
        cin>>n;
        S="";
        int a[200001]={0};
        for(int j=0;j<n;j++){
            cin>>x;
            S+=char('a'+a[x]);
            a[x]++;

        }
        cout<<S<<"\n";
   }
   return 0;
}