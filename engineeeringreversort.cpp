#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<list>
#include<algorithm>
#include<iterator> 

using namespace std;

vector <string>tokenizer(string str,char ch){
    std::istringstream var((str));
    vector <string> v;
    string t;
    while(getline((var),t,(ch))){
        v.emplace_back(t);
    }
    return v;
} 

void err(istream_iterator<string> it){}
template<typename T,typename...Args>
void err(istream_iterator<string> it,T a,Args...args){
    cout<<*it<<"="<<a<<"\n";
    err(++it,args...);
}

void file_i_o(){
    freopen("./c++/test01.txt","r",stdin);
    freopen("./c++/output01.txt","w",stdout);
}

list<int> construct(int n,int c,int m){
    if(n==1){
        return list<int>(1,m);
    }

    if(c-1>=n-2 and c-1<=(n*(n-1))/2-1){
        list<int> arr=construct(n-1,c-1,m+1);
        arr.push_front(m);
        return arr;
    }
    int x=c-(n*(n-1))/2 +1;
    list<int>arr=construct(n-1,c-x,m+1);
    list<int> ::iterator end=arr.begin();
    advance(end,x-1);
    reverse(arr.begin(),end);
    arr.insert(end,m);
    return arr;
}

int main(int argc,char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    cin>>t;
    for(int i=1; i<=t; i++){
        int n;
        cin>>n;
        int c;
        cin>>c;

        //put(a)          cout<<a<<" ";
        cout<<"case #"<<i<<":"<<" ";
        if(c<n-1 or c>(n*(n+1))/2 -1){
            cout<<"IMPOSSIBLE"<<"\n";
            continue;
        }
        list<int> ans=construct(n,c,1);
        //logarr(a)       for(auto i:a) { cout<<i<<" "; } cout<<"\n"; 

        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
