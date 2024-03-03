#include<iostream>
using namespace std;
int main(){
    int n,w=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<3;j++){
            int q;
            cin>>q;
            if(q==1){
                k++;
            }
        }
        if(k>=2){
            w++;
        }
    }
    cout<<w<<" ";
}