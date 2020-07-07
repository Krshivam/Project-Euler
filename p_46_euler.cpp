#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
std::map<int,std::vector<int> > m;


void f(int n){
	int x = n;
	if(n%2==0) m[x].pb(2);
	while(n%2==0){
		n/=2;
	}
	for (int i = 3; i*i <=n ; i++)
	{
		if(n%i==0){
			m[x].pb(i);
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n>1){
		m[x].pb(n);
	}
}


int main(int argc, char const *argv[])
{
	int x = 2;
	while(x<150000){
		f(x);
		x++;
	}
	for (int i = 2; i < 150000; ++i)
	{
		if(m[i].size()==4 && m[i+1].size()==4 && m[i+2].size()==4 && m[i+3].size()==4){
			cout<<i;
			break;
		}
	}
	return 0;
}