#include<bits/stdc++.h>
using namespace std;

int prime[10000006];
int mx = 10000006;

void euler(){
	for (int i = 2; i < mx; ++i)
	{
		if(i%2) prime[i] = 1;
		else prime[i] = 0;
	}

	for (int i = 3; i*i <mx ; i+=2)
	{
		if(prime[i]){
			for (int j = i*i; j < mx; j+=i)
			{
				prime[j]= 0;
			}
		}
	}
	prime[2] = 1;
	prime[0] = 0;
	prime[1] = 0;
}

int main(int argc, char const *argv[])
{
	euler();
	int mx = 0;
	int ans;
	for (int i = -999; i < 999; i++)
	{
		for (int j = -1000; j <=1000 ; ++j)
		{
			int cnt=0;
			for (int k = 0; k <800; ++k)
			{
				if(k*k+i*k+j>=0 && prime[k*k+i*k+j]){
					cnt++;
					if(mx<cnt) {
						ans = i*j;
						mx = cnt;
					}
				}
				else cnt=0;
			}
		}
	}
	cout<<ans<<" "<<mx;
	return 0;
}