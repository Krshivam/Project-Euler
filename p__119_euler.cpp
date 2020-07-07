#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll f(ll d){
	ll sm =0;
	while(d){
		sm += d%10;
		d/=10;
	}
	return sm;
}

int main(int argc, char const *argv[])
{
	std::vector<ll> v;
	//std::map<ll, int> m;

	for (ll i = 2; i <=150 ; ++i)
	{
		ll curr = i;
		for (int j = 0; j <=50 ; ++j)
		{
			curr*=i;
			if(f(curr)==i){
				v.pb(curr);
			}
			else if(curr>=1e16){
				break;
			}
		}
	}
	cout<<v.size()<<endl;
	sort(v.begin(), v.end());
	cout<<v[29]<<" "<<v[1];
	return 0;
}