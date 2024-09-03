#include<iostream>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x1,x2,y1,y2;
        cin>>a>>b>>x1>>y1>>x2>>y2;
        set<pair<int,int>> st1,st2;
         
        st1.insert(make_pair(x1+a,y1+b));
        st1.insert(make_pair(x1+a,y1-b));
        st1.insert(make_pair(x1+b,y1+a));
        st1.insert(make_pair(x1+b,y1-a));
        st1.insert(make_pair(x1-a,y1+b));
        st1.insert(make_pair(x1-a,y1-b));
        st1.insert(make_pair(x1-b,y1-a));
        st1.insert(make_pair(x1-b,y1+a));

        st2.insert(make_pair(x2+a,y2+b));
        st2.insert(make_pair(x2+a,y2-b));
        st2.insert(make_pair(x2+b,y2+a));
        st2.insert(make_pair(x2+b,y2-a));
        st2.insert(make_pair(x2-a,y2+b));
        st2.insert(make_pair(x2-a,y2-b));
        st2.insert(make_pair(x2-b,y2-a));
        st2.insert(make_pair(x2-b,y2+a));

        int ans=0;
        for(auto x: st1){
            if(st2.find(x) !=st2.end()){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
}