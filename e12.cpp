#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c,d,i,n,sum=0,e,f;
		cin>>e>>f;
		if(f>e)
		{
			c=f;
			d=e;
		}
		else
		{
			c=e;
			d=f;
		}
		cin>>n;
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			cin>>b[i];
			if(a[i]==1 && b[i]==1)
			{
				sum=sum+d+c;
			}
			if(a[i]==1 && b[i]==0)
			{
				sum=sum+c;
			}
			if(a[i]==0 && b[i]==1)
			{
				sum=sum+d;
			}

		}
		cout<<sum<<endl;
	}
}