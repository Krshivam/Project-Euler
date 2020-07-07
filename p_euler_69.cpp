
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

ll phi[1000002];
pll arr[1000002];



void euler(){
	for (int i = 1; i <1000002; ++i)
	{
		phi[i] = i;
	}
	for (int i = 2; i*i <1000002 ; ++i)
	{
		if(phi[i]==i){
			for(int j=i;j<1000002;j+=i){
				phi[j] -= phi[j]/i;
			}
		}
		
	}
}


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//euler();
	int prime[] = {2,3,5,7,11,13,17,19};
	ll mx = 1;
	int i = 0;
	while(mx*prime[i]<1e6){
		mx*=prime[i];
		i++;
	}
	cout<<mx;
	return 0;
}
