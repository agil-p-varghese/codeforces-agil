#include<iostream>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,a,b;
        cin>>a>>b>>l;
        set<int> ss;
        for(int i=1;l%i==0;i*=a){
            for(int j=1;l%(i*j)==0;j*=b){
                ss.insert(l/(i*j));
            }
        }
        cout<<ss.size()<<"\n";
        
    }
    return 0;
}