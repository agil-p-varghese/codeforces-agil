#include<iostream>
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string A;
        A="";
        cin>>A;
        if(A=="X++" || A=="++X"){
            x++;
        }
        if(A=="X--" || A=="--X"){
            x--;
        }
    }
    cout<<x;
}