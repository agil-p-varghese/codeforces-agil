#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, k, m=-1;
		cin >> n >> k;
		for(int i=0;i<k;i++){
			int d;
			cin >> d;
			m = (d>m)? d:m;
		}
		cout << 2*(n-m)-k+1 << endl;
}
}   