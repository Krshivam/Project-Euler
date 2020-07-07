#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1000000];
ll mod = 1e9;

bool f(ll x){
	std::map<int, int> m;
	while(x){
		m[x%10]+=1;
		x/=10;
	}
	return (m.size()==9 && m.count(0)==0);
}


bool f1(ll x){
	std::map<int, int> m;
	while(x){
		m[x%10]+=1;
		x/=10;
	}
	return (m.size()==9 && m.count(0)==0);
}

int main(int argc, char const *argv[])
{
	dp[0] = 0;
	dp[1] = 1;
	std::map<int, ll> m;
	for (int i = 2; i < 1000000; ++i)
	{
		dp[i] = dp[i-1] + dp[i-2];
		dp[i]%=mod;
		if(f(dp[i])) m[i]+=1;
	}
	cout<<m.size()<<endl;
	
	for(std::map<int,ll>::iterator it=m.begin();it!=m.end();it++){
		long double t = ((it->first)*0.20898764024997873 - 0.3494850021680094);
		t = pow(10,t-floor(t));

		ll x = 1e8*t;
		if(f1(x)){
			cout<<it->first<<endl;
		}
		//cout<<x<<endl;
	}
	return 0;
}