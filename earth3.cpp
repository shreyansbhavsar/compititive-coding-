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
		sum=sum+a[i];
	}
	cin>>n;
	while(n--)
	{
		m=sum;

		int c,b;
		cin>>c>>b;
		for(i=1;i<=t;i++)
		{
			if(i==c)
			{
				m=m-a[i-1]+b;
				break;
			}
		}

		if(m%2==0)
			cout<<1<<endl;
		else
			cout<<2<<endl;
	}

}