#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		long long  c,n,ans=0,s,i;
		cin>>c>>n;
		long long a[n],b[n];
		for ( i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
			if (i==0)
			{
					if (a[0]>b[0])
					{
						ans=ans+a[0]+abs(a[0]-b[0]);
					}
					else
					{
						ans=ans+b[0];
					}
			}
			else
			{
				s=b[i-1];
				ans=ans+abs(s-a[i]);
				s=a[i];
				ans=ans+abs(s-b[i]);
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}