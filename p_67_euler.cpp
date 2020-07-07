#include<bits/stdc++.h>
using namespace std;

#define ll long long
int arr[100][100];

ll dp[100][100];

ll f(int i,int j){
	if(j==100){
		if(i<100) return -999999999;
	}
	if(i==100) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	return dp[i][j] = max(arr[i][j]+f(i+1,j),arr[i][j]+f(i+1,j+1));
}

int main(int argc, char const *argv[])
{
	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			if(j>i) arr[i][j] = 0;
			else cin>>arr[i][j];
		}
	}
	memset(dp,-1,sizeof(dp));
	cout<<f(0,0)<<endl;
	return 0;
}