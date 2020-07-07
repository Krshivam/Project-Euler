#include<bits/stdc++.h>
using namespace std;
#define ll long long
int prime[10000006];
int mx = 10000006;



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

ll dp[5001][5001];

ll f(int i,int j,int n){
	if(i==0)
		return 1;
	if(j>n) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	ll ans=0;
	if(i-j>=0 && prime[j]){
		ans += f(i-j,j,n);
	}
	ans += f(i,j+1,n);
	return dp[i][j]=ans;
}

int main(int argc, char const *argv[])
{
	euler();
	for (int i = 2; i <=5000; ++i)
	{
		for(int j=0;j<=i;j++){
			for(int k=0;k<=i;k++){
				dp[j][k] = -1;
			}
		}
		cout<<f(i,1,i)<<" "<<i<<endl;
	}
	return 0;
}