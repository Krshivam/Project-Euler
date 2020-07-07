#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

bool f(ll a,ll b){
	int cnta = 0;
	int cntb = 0;
	while(a){
		cnta++;
		a/=10;
	}
	while(b){
		cntb++;
		b/=10;
	}
	return cnta>cntb;
}

int main(int argc, char const *argv[])
{
	ll a = 3;
	ll b = 2;
	int x = 1;
	int cnt = 0;
	while(x<=1000){
		ll temp = a+2*b;
		b = a+b;
		a = temp;
		if(f(a,b)) cnt++;
		x++;
		if(x<100) cout<<a<<" "<<b<<endl;
	}
	//cout<<a<<" "<<b;
	cout<<cnt;
	return 0;
}