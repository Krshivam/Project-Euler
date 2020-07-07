#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[50000005];
int main(int argc, char const *argv[])
{
	memset(arr,0,sizeof(arr));
	for (ll i=1; i <50000000 ; ++i)
	{
		for(ll j=1;i*j<50000000;j++){
			if((i+j)%4==0 && 3*j-i>0 && (3*j-i)%4==0) arr[i*j]+=1;
		}
	}
	int cnt=0;
	for (int i=0;i<50000000;i++)
	{
		cnt += (arr[i]==1);
		//if(it->first>100) break;
	}
	cout<<cnt<<endl;
	return 0;
}