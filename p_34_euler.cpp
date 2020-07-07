#include<bits/stdc++.h>
using namespace std;
#define ll long long
std::map<int, int> m;
int dp[40000000][10];

int f(int i,ll sm,ll cr_sum){
	if(i==8){
		if(sm==cr_sum) cout<<sm<<endl;
		return sm==cr_sum;
	}
	if(dp[sm][i]!=-1) return dp[sm][i];
	int ans = 0;
	for (int j = 0; j <10; ++j)
	{
		ans = f(i+1,sm*10LL+j,sm*10LL+j==0?0:cr_sum+m[j]);
	}
	return dp[sm][i]=ans;
}


int main(int argc, char const *argv[])
{
	m[1] = 1;
	m[0] = 1;
	m[2] = 2;
	m[3] = 6;
	m[4] = 24;
	m[5] = 120;
	m[6] = 720;
	m[7] = 5040;
	m[8] = 40320;
	m[9] = 362880;
	memset(dp,-1,sizeof(dp));
	cout<<f(0,0,0);
	return 0;
}