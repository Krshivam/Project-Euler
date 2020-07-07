#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int ans = 0;
	int val;
	int b,e;
	string x;
	int val1,val2;
	for (int i = 0; i < 1000; ++i)
	{
		getline(cin,x);
		//cout<<x<<endl;
		b=0,e=0;
		int t=0;
		for (int j = 0; j <x.length() ; ++j)
		{
			if(x[j]==',') t=1;
			else if(!t) b = b*10 + (x[j]-'0');
			else e=e*10+(x[j]-'0');
		}
		//cout<<e<<" "<<b<<endl;
		if(ans<e*log(b)){
			ans = (e*log(b));
			val1 = b;
			val2 = e;
			val = i;
		}
	}
	cout<<val<<" "<<val1<<" "<<val2;
	return 0;
}