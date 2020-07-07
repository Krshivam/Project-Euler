#include<bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[])
{
	int cnt=0;
	for (int i = 1; i < 10000000; ++i)
	{
		std::map<int, int>m;
		int x = i;
		while(!m.count(x)){
			m[x]+= 1;
			int y = 0;
			while(x){
				y+= pow(x%10,2);
				x/=10;
			}
			x = y;
			if(x==89) {
				cnt++;
				break;
			}
		}
	}
	cout<<cnt;
	return 0;
}