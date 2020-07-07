#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int minval=0;

int f(int i,int j,int sm,int prd,int n,int t,int k,vector<int>&arr){
	if(i==n){
		if(sm==prd && sm==t && j==k) {
			minval = sm;
			cout<<sm<<endl;
			return 1;
		}
		return 0;
	}
	else if(sm==prd && sm==t && j==k) {
		minval = sm;
		cout<<sm<<endl;
		return 1;
	}
	else if(j==k) {
		//cout<<"Hello"<<" ";
		return 0;
	}
	cout<<sm<<" "<<j<<" "<<k<<" "<<prd<<" "<<t<<" " <<endl;
	int ans = 0;
	ans =  f(i,j+1,sm+arr[i],prd*arr[i],n,t,k,arr);
	ans = f(i+1,j,sm,prd,n,t,k,arr);
	//ans = f(i+1,j+1,sm+arr[i],prd*arr[i],n,t,k,arr);
	return ans;
}

int main(int argc, char const *argv[])
{
	std::map<int, int> m;
	for (int i = 2; i <=12000 ; ++i)
	{
		for (int j = i; j < 50000; ++j)
		{
			std::vector<int> v;
			minval = 0;
			for (int k= 1; k*k <=j ; ++k)
			{
				if(j%k==0){
					v.pb(j);
					if(k*k!=j) v.pb(j/k);
				}
			}
			int ans = f(0,0,0,1,v.size(),j,i,v);
			cout<<"HELLO"<<endl;
			if(minval) {

				cout<<minval<<endl;
				m[minval]+=1;
				break;
			}
		}
	}
	return 0;
}