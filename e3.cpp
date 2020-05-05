#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,m,n,sum=0;
	cin>>t;
	int i,a[t];
	for(i=0;i<t;i++)
	{
		cin>>a[i];
	}
	cin>>n;
	while(n--)
	{
		int c,b;
		cin>>c>>d;
		if((c%2==0 && b%2==0) || (c%2!=0 && b%2!=0))
			cout<<2<<endl;
		else
			cout<<1<<endl;
	}