#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long
#define pb push_back
#define mp make_pair
#define inp(x) cin>>x
#define print(x) cout<<x
#define pii pair<int,int>
#define pll pair<ll,ll>
#define gcd(a,b) __gcd(a,b)
#define reset(d,val) memset(d,val,sizeof(d))
#define sort(v) sort(v.begin(),v.end())
#define sort_arr(arr,i,f) sort(arr+i,arr+f)
#define pq priority_queue<int,vector<int>,greater<int> >
#define pq1 priority_queue<pll,vector<pll>,greater<pll> >

const int mod = 1e9+7;
ll x = 1e6;

int n,m;
ll dp[10000][10000];
//int arr[] = {1,2,3,4,5};

ll f(int i,int j){
	if(j>m) return i==n;
	if(i==n) return 1;
	if(dp[i][j]!=-1) return dp[i][j];
	ll ans = 0;
	if(i+j<=n) {
		ans = f(i+j,j);
		//ans += f(i+arr[j],j+1);
	}
	ans += f(i,j+1);
	ans = (ans+x)%x;
	return dp[i][j]=ans%x;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for (int i = 1; i <10000 ; ++i)
	{
		memset(dp,-1,sizeof(dp));
		n=i,m=i;
		cout<<f(0,1)%x<<endl;
	}
	return 0;
}
