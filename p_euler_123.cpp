#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

bool prime[1000005];
std::vector<ll> v;

void sieve(){
	for (int i = 2; i < 1000005; ++i)
	{
		if(i%2==0) prime[i]=0;
		else prime[i] = 1;
	}
	prime[2] = 1;
	for (int i = 3; i*i < 1000005; i+=2)
	{
		if(prime[i]){
			for(int j=i*i;j<1000005;j+=i){
				prime[j] = 0;
			}
		}
	}
	for (ll i = 2; i < 1000005; ++i)
	{
		if(prime[i]) v.pb(i);
	}
}


ll power(ll a,ll b,ll mod){
	if(b==0) return 1LL;
	ll x = power(a,b>>1,mod);
	if(b&1){
		return (a*(x*x)%mod)%mod;
	}
	return (x*x)%mod;
}

int main(int argc, char const *argv[])
{
	sieve();
	//cout<<v.size();
	//cout<<power(2,8,1e9+7)<<endl;
	//cout<<v[7037]<<endl;

	for (int i = 0; i < v.size(); ++i)
	{
		if((i+1)%2){
			if(2*v[i]*(i+1)>1e10) {
				cout<<i+1;
				break;
			}
		}
	}
	return 0;
}