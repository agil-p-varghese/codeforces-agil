#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

const int MOD= 1e9 + 7;
const int inf= 1e9 + 10;
const long long INF= 1e18 + 10;

const double golden=(1+sqrt(5))/2;

int main(){
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        double a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        long long ans=0;

        for(int b=b1;b<=b2;b++){
            if(floor(golden *b) <a1 || floor((golden-1)*b)>a2){
            ans+=(a2-a1+1);
            cout<<"if block"<<"\n";

            }
            
            else{

                ans+=max(0.0,a2- floor(golden * b));
                ans+=max(0.0,ceil((golden -1) *b)- a1);
                cout<<"else block "<<"\n";
            }
        }
        cout<<"case #"<<i<<":"<<' '<<ans<<"\n";
    }
}