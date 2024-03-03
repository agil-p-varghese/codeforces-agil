#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
int b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[a[i]-1];
}
for(int i=0;i<n;i++){
    cout<<i+1<<" ";
}
cout<<"\n";
for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
}
}
    return 0;
}