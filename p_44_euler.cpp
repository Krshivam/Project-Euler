#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(int argc, char const *argv[])
{
	int n=1;
	std::map<int,int> m;
	std::vector<int> v;
	while(n<=10000){
		m[(n*(3*n-1)/2)]++;
		v.pb((n*(3*n-1)/2));
		n++;
	}
	int x = v.size();
	int ans = 1e9+7;
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < x; ++j)
		{
			if(i!=j){
				if(m.count(v[i]+v[j]) && m.count(abs(v[i]-v[j]))){
					ans = min(ans,abs(v[i]-v[j]));
				}
			}
		}
	}

	cout<<ans<<endl;
	return 0;
}