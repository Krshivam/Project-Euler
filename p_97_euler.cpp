#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod = 1e10;

int main(int argc, char const *argv[])
{
	//cout<<log2(2)<<endl;
	ll ans = 28433;
	for (int i = 0; i < 7830457; ++i)
	{
		ans*=2;
		ans%=mod;
	}
	ans += 1;
	ans%=mod;
	cout<<ans;
	return 0;
}