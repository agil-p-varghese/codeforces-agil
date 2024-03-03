#include <bits/stdc++.h>
using namespace std;
int t,a,b;
int main(){
	cin>>t;
	while (t--){
		cin>>a>>b;
		cout<<(b%a==0?b/a*b:a/__gcd(a,b)*b)<<endl;
	}
	return 0;
}