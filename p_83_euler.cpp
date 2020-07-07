#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[81][81];
ll dp[82][82];


ll f(int i,int j){
	if(i==80 && j==80) return 0;
	if(i>80 || j>80 || i<0 || j<0) return 9999999999999;
	if(dp[i][j]!=-1) return dp[i][j];
	ll ans = 9999999999999;
	ans = min(ans,arr[i][j]+f(i+1,j));
	ans = min(ans,arr[i][j]+f(i,j+1));
	if(i-1>=0) ans = min(ans,arr[i][j]+f(i-1,j));
	if(j-1>=0) ans = min(ans,arr[i][j]+f(i,j-1));
	return dp[i][j] = ans;
}

int main(int argc, char const *argv[])
{

	for (int i = 0; i < 80; ++i)
	{
		string s;
		getline(cin,s);
		int cntj=0;
		ll val = 0;
		for (int j = 0; j < s.length(); ++j)
		{
			if(s[j]==',') arr[i][cntj]=val,cntj++,val=0;
			else val+=val*10+(s[j]-'0');
		}
	}
	for (int i = 0; i < 80; ++i)
	{
		for (int j = 0; j < 80; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	memset(dp,-1,sizeof(dp));
	cout<<f(0,0);
	return 0;
}