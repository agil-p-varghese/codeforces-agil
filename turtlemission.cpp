#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<=n;i++)
#define per(i,a,n) for(int i=n;i>=a;i--)
#define pb push_back
#define SZ(v) ((int)v.size())
#define fs first
#define sc second
#define all(x) (x.begin()),(x.end())
typedef long long ll;
typedef double db;
typedef pair<int,int> pii;
int t,n,m,a[1010][1010],dis[1010][1010];
int dx[]={2,1},dy[]={0,1};
int main(){
	std::ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>m;
		rep(i,0,n-1){
			rep(j,0,m-1){
				cin>>a[i][j];
				dis[i][j]=1e7;
			}
		}
		queue<pii> q;
		q.push({0,0});
		dis[0][0]=0;
		while(!q.empty()){
			auto [x,y]=q.front();q.pop();
			rep(i,0,1){
				int tx=(dx[i]+x)%n,ty=dy[i]+y;
				if(a[tx][ty]==1||ty>=m)	continue;
				if(i==0&&a[(x+1)%n][y]==1)	continue;
				if(dis[tx][ty]>dis[x][y]+1){
					dis[tx][ty]=dis[x][y]+1;
//					cout<<dis[tx][ty]<<':'<<tx<<' '<<ty<<endl;
					q.push({tx,ty});
				}
			}
		}
		int ans=1e8;
		rep(i,0,n-1){
			int realp=((i-dis[i][m-2])%n+n)%n;
			ans=min(ans,dis[i][m-2]+1+min(realp+1,n-1-realp));
		}
		if(ans<10000000)	cout<<ans<<endl;
		else	cout<<-1<<endl;
	}
	return 0;
}
