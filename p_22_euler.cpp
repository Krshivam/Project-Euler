#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main(int argc, char const *argv[])
{
	int n=50000;
	std::vector<string> v;
	string s;
	while(n){
		cin>>s;
		v.pb(s);
	}
	sort(v.begin(), v.end());
	ll sm=0;
	for (ll i = 0; i < v.size(); ++i)
	{
		ll val = 0;
		for (int j = 0; j < v[i].size(); ++j)
		{
			val += (v[i][j]-'0');
		}
		sm += val*(i+1);
	}
	cout<<sm<<endl;
	return 0;
}