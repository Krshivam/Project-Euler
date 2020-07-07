#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sm1 = 0;

int dp[500000][10];

int f(int sm,int cnt,int trsm){
	if(cnt==8){
		//if() return 1;
		if(trsm==sm) cout<<sm<<endl;
		return trsm==sm;
	}
	//if(dp[sm][cnt]!=-1) return dp[sm][cnt];
	int ans =0;
	for (int i = 0; i <=9; ++i)
	{
		ans = f(sm*10+i,cnt+1,trsm+pow(i,5));
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	memset(dp,-1,sizeof(dp));
	cout<<f(0,0,0);
	cout<<sm1;
	return 0;
}