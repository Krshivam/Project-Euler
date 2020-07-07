#include<bits/stdc++.h>
using namespace std;

int ar[1000005];

int main(int argc, char const *argv[])
{
	memset(ar,0,sizeof(ar));
	for (int i = 1; i <=1000000; ++i)
	{
		for (int j = 1; i*j <=1000000; ++j)
		{
			if((i+j)%4==0 && 3*j-i>0 && (3*j-i)%4==0) ar[i*j]++;
		}
	}
	int cnt=0;
	for (int i = 0; i < 1000000; ++i)
	{
		if(ar[i]==10) cnt++;
	}
	cout<<ar[1155]<<endl;
	cout<<cnt<<endl;
	return 0;
}

