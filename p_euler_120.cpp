#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
	ll sm = 0;
	for (int i = 3; i <=1000; ++i)
	{
		sm += 2*i*((i-1)/2);
		
	}
	cout<<sm;
	return 0;
}