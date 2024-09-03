#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,min=100;
        cin>>a>>b>>c;
        for(int i=1;i<=10;i++){
            int dist=abs(a-i)+abs(b-i)+abs(c-i);
            if(min>dist){
                min=dist;
            }
        }
        cout<<min<<endl;
    }
    }