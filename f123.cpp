#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(a==b)
		{
			cout<<0<<endl;
		}
		else if(((a<b) && (!((b-a)&1))) || ((a>b) && ((a-b) &  1)))
			cout<<2<<endl;
		else
			cout<<1<<endl;
	}
}