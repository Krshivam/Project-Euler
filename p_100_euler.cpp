#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
	ll b1 = 15;
	ll n1 = 21;
	ll t = 1e12;
	while(n1<t){
		ll b2 = 3*b1+2*n1-2;
		ll n2 = 4*b1+3*n1-3;
		b1 = b2;
		n1 = n2;
	}
	cout<<b1;
	return 0;
}