#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll f(ll d){
	ll t = sqrt(d);
	return t*t==d;
}

int main(int argc, char const *argv[])
{
	std::vector<ll> v;
	std::map<ll, ll> m;
	for (ll i = 1; i <=1000; ++i)
	{
		for (ll j = i+1; j <=10000 ; ++j)
		{
			ll t = sqrt(j-i);
			ll z = sqrt(i+j);
			if(t*t== j-i && z*z==i+j){
				if(m.count(i)==0) v.pb(i),m[i]+=1;
				if(m.count(j)==0) v.pb(j),m[j]+=1;
			}
		}
	}
	sort(v.begin(),v.end());
	cout<<v.size()<<endl;
	int b= 0;
	ll ans = 0;
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = i+1; j < v.size(); ++j)
		{
			for(int k=j+1;k<v.size();k++){
				ll x = v[k];
				ll y = v[j];
				ll z = v[i];
				if(f(x+y) && f(x-y) && f(x+z) && f(x-z) && f(y+z) && f(y-z)){
					ans = x+y+z;
					cout<<x<<" "<<y<<" "<<z<<endl;
					//b=1;
					cout<<ans<<endl;
					return 0;
				}
				//if(b) break;
			}
		}
	}
	//cout<<
	return 0;
}
