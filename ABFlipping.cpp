//#include<stdio>
#include<string>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string a="";
        cin>>n>>a;
        int s=0;

        while(n>0 && a[n-1]=='A'){
            n--;
            //cout<<"first loop"<<n<<endl;
        }

        while(s<a.size() && a[s]=='B'){
            s++;
            //cout<<"second loop"<<s<<endl;

        }

        cout<<max(n-s-1,0)<<endl;

    }
}