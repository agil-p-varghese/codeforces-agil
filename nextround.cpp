#include<iostream>
using namespace std;
int main(){
    int n,k,w=0;
    cin>>n>>k;

    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    int p=A[k-1];
    for(int i=0;i<n;i++){
        if(A[i]>=p and A[i]>0){
            w++;
        }
    }
    cout<<w;

}