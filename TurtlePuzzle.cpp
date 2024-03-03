#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<int> p,l;
        for(int i=0;i<n;i++){
            if(a[i]>=0){
                p.push_back(a[i]);
            }
            else{
                l.push_back(a[i]);
            }
        }

        int s1=0,s2=0;
        while(!p.empty()){
            int y=p.back();

            p.pop_back();
            s1+=y;
        }

        while(!l.empty()){
            int x=l.back();
            l.pop_back();
            s2-=x;
            //cout<<"s2"<<s2<<"\n";
        }
        int s=s1+s2;
        cout<<s<<"\n";
    }
    return 0;
}