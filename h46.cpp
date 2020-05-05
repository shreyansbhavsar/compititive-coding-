#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c=0;
		cin>>a;
		while(a>0)
		{
			b=a%10;
			c=c*10+b;
			a=a/10;
		}
		cout<<c<<endl;
	}
	return 0;
	
}