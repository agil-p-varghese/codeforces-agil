#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int reversort(vector<int> L){
    int cost=0;
    int len=L.size();
    for(int i=0;i<len;i++){
        int min=*min_element(L.begin()+i,L.end());
        cout<<"min  "<<min;
        cout<<"\n";

        auto id=find(L.begin(),L.end(),min);
        cout<<"id  "<<*id;
        cout<<"\n";

        reverse(L.begin()+i,id+1);
        for(auto i:L){
        cout<<i<<" ";
    }
        cout<<"\n";


        cost+=distance(L.begin(),id)-i+1;
    }
    return cost;
}

int main(){
    std::ios::sync_with_stdio(false);
    int T;
    cin>>T;
    vector<int> L;
    for(int i=1;i<T+1;i++){
        cout<<"enter the size";
        int n;
        cin>>n;

        
        for(int j=0;j<n;j++){
            int e;
            cin>>e;
            L.push_back(e);
        }
        cout<<"case# "<<i<<":"<<reversort(L)<<endl;
    }
        cout<<"\n";

    
    return 0;
}