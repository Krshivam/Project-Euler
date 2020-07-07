
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

ll phi[5001];
pll arr[10000002];



void euler(){
	for (int i = 1; i <5001; ++i)
	{
		phi[i] = 1;
	}
	for (int i = 2; i*i <5001 ; ++i)
	{
		if(phi[i]){
			for(int j=i*i;j<5001;j+=i){
				phi[j]= 0;
			}
		}
		
	}
}

bool f(int i,int j){
	std::map<int, int>m;
	while(i){
		m[i%10]++;
		i/=10;
	}
	while(j){
		m[j%10]--;
		j/=10;
	}
	for(std::map<int,int>::iterator it=m.begin();it!=m.end();it++){
		if(it->second!=0) return false;
	}
	return true;
}


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	euler();
	//std::vector<pii> v;
	long double ans = mod*1.0;
	int fn;
	for (int i = 2; i < 5001; ++i)
	{
		for(int j=i+1;j<5001;j++){
			if(f((i-1)*(j-1),i*j) && phi[i] && phi[j] && i*j<10000001 && ans>(i*j*1.0)/((i-1)*(j-1)*1.0)){
				ans=(i*j*1.0)/((i-1)*(j-1)*1.0);
				fn = i*j;
			}
		}
	}
	cout<<fn;
	return 0;
}
