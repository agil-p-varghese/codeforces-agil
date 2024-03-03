#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n0=0,n1=0,l,cost=0,i=0;
        string s="";
        cin>>s;
        l=s.length();
        cout<<"len"<<l<<"\n";

        while(s[i]!='\0'){
            if(s[i]=='1'){
                n1++;
            }
            i++;
        }
        n0=l-n1;

        if(l==1){
                cost=1;
                cout<<cost<<"\n";
                continue;
        }

        else if(n1==n0){
            cost=0;
            cout<<cost<<"\n";
                continue;
            
        }

        else if(n1==0 || n0==0){
            cost=l;
            cout<<cost<<"\n";
                continue;
            
        }

        else{
            int x=abs(n1-n0);
            cost=x;
            cout<<cost<<"\n";
                continue;
            
        }

    }
    return 0;
}