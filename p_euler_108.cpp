#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
	std::map<ll, int> m;
	for (ll i = 1; i <=10000; ++i)
	{
		for (ll j = 1; j <=10000 ; ++j)
		{
			if((i*j)%(i+j)==0) m[(i*j)/(i+j)]+=1;
		}
	}
	for(std::map<ll,int>::iterator it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}