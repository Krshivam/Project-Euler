#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pii pair<int,int>
#define mp make_pair
int prime[10000006];
int mx = 10000006;

map<pii,int>dp;

void euler(){
	for (int i = 2; i < mx; ++i)
	{
		if(i%2) prime[i] = 1;
		else prime[i] = 0;
	}

	for (int i = 3; i*i <mx ; i+=2)
	{
		if(prime[i]){
			for (int j = i*i; j < mx; j+=i)
			{
				prime[j]= 0;
			}
		}
	}
	prime[2] = 1;
	prime[0] = 0;
	prime[1] = 0;
}

std::vector<int> v;
int b=1;

int f(int i,int j,int n,int b){
	if(i==n){
		if(!prime[j]){
			b=0;
			//cout<<j<<" ";
		}
		return prime[j];
	}
	//cout<<j<<endl;
	//if(dp.count(mp(j,i))) return dp[mp(j,i)];
	int ans = 0;
	for (int k = 0; k < n; ++k)
	{
		if((b&(1<<k)) ==0 )
		ans = f(i+1,j*10+v[k],n,b|(1<<k));
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	euler();
	int cnt=0;
	for (int i = 2; i <= 1000000; ++i)
	{
		if(prime[i]){
			b=1;
			v.clear();
			int x = i;
			while(x){
				v.pb(x%10);
				x/=10;
			}
			dp.clear();
			int ans = f(0,0,v.size(),0);
			if(b) cnt++;
		}
	}
	cout<<cnt;
	return 0;
}