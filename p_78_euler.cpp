#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[101][101];

ll f(int i,int j,int n,int b){
	if(i==0) return 1LL;
	if(j>n) return 0LL;
	if(dp[i][j]!=-1) return dp[i][j];
	ll ans = 0;
	if(i-j>=0){
		ans += f(i-j,j,n);
	}
	ans += f(i,j+1,n);
	return dp[i][j]=ans%1000000;
}

int main(int argc, char const *argv[])
{
	for (int i = 1; i <=100; ++i)
	{
		for (int j = 0; j <=i ; ++j)
		{
			for(int k=0;k<=i;k++){
				dp[j][k] = -1;
			}
		}
		ll ans = f(i,1,i,0);
		cout<<ans<<endl;
		if(i==100)
		if(ans%1000000 == 0) {
			cout<<ans<<endl;
			break;
		}
	}
	return 0;
}