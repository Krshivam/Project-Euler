#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pll pair<ll,ll>
#define mp make_pair
#define pb push_back

ll dist(pll a,pll b){
	return sqrt((a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second));
}

ll area(ll a,ll b, ll c){
	ll s = (a+b+c);
	return (s)*(a+b-c)*(a+c-b)*(b+c-a);
}


ll area1(pll a,pll b,pll c){
	return abs((a.first*(b.second-c.second)+b.first*(c.second-a.second)+c.first*(a.second-b.second)));
}


int main(int argc, char const *argv[])
{

	int n = 1000;
	int cnt=0;
	while(n--){
		string s;
		getline(cin,s);
		pll x,y,z;
		std::vector<ll> v;
		stringstream ss(s);
		for(int i;ss>>i;){
			v.pb(i);
			if(ss.peek() == ','){
				ss.ignore();
			}
		}
		//cout<<v.size()<<" ";
		//int cnt=0;
		x.first = v[0];
		x.second = v[1];

		y.first = v[2];
		y.second = v[3];
		z.first = v[4];
		z.second = v[5];
		//cout<<x.first<<" ";
		pll o = mp(0LL,0LL);
		cout<<area1(x,y,z)<<endl;
		if(area1(x,y,z)==area1(x,y,o)+area1(x,z,o)+area1(y,z,o)) cnt++;
	}
	cout<<cnt;
	return 0;
}